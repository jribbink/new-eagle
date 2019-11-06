/*
 * MainWindow.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gdkmm/screen.h>
#include <gtkmm/notebook.h>

#include "Util/Globals.h"
#include "Pages/IdlePage.h"

class MainWindow : public Gtk::Window {
public:
	Gtk::Notebook* notebook;
	MainWindow();
	virtual ~MainWindow();
};

#endif /* MAINWINDOW_H_ */
