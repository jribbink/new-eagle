/*
 * MainPage.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include <gtkmm/bin.h>
#include <gtkmm/builder.h>
#include <gtkmm/fixed.h>

#include "Page.h"

#ifndef MAINPAGE_H_
#define MAINPAGE_H_

namespace NESC::Pages
{
	class MainPage : public NESC::Page {
	public:
		MainPage();
		virtual ~MainPage();
	};
}

#endif /* MAINPAGE_H_ */
