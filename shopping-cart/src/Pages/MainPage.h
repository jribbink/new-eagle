/*
 * MainPage.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include <gtkmm/bin.h>
#include <gtkmm/builder.h>
#include <gtkmm/fixed.h>
#include <gtkmm/treeview.h>
#include <gtkmm/liststore.h>
#include "../Util/Globals.h"

#include "Page.h"
#include "PaymentPage.h"

#ifndef MAINPAGE_H_
#define MAINPAGE_H_

namespace NESC::Pages
{
	class MainPage : public NESC::Page {
	public:
		MainPage();
        void barcodeHandler(char* barcode);
        gboolean keyPress(GdkEventKey *key);
        void payBtnPress();
		virtual ~MainPage();
	};
}

#endif /* MAINPAGE_H_ */
