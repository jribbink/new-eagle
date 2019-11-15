/*
 * IdlePage.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#ifndef IDLEPAGE_H_
#define IDLEPAGE_H_

#include "MainPage.h"
#include "../MainWindow.h"
#include "Page.h"

#include <gtkmm/button.h>
#include <gtkmm/builder.h>
#include <gtkmm/window.h>
#include <gdkmm/screen.h>
#include <gtkmm/fixed.h>
#include <gtkmm/bin.h>

#include <iostream>

namespace NESC::Pages
{
	class IdlePage : public NESC::Page{
	public:
		IdlePage();
        void scaleBg();
		virtual ~IdlePage();
	private:
		void on_button_clicked();
	};
}

#endif /* IDLEPAGE_H_ */
