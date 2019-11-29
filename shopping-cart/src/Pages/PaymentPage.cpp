/*
 * PaymentPage.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "PaymentPage.h"
#include <gtkmm/label.h>

#include <string.h>

namespace NESC::Pages
{
	PaymentPage::PaymentPage(double total)
	{
		ImportGlade("payment");
        
        char* buf = new char[64];
        sprintf(buf, "Your total: $%.2f", total);
        
        Gtk::Label* totalLabel;
        builder->get_widget("totalLabel", totalLabel);
        totalLabel->set_text(buf);
	}

	PaymentPage::~PaymentPage() {
		// TODO Auto-generated destructor stub
	}
}
