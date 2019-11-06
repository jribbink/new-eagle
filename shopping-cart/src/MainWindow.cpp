/*
 * MainWindow.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "MainWindow.h"
#include <iostream>

MainWindow::MainWindow() {
	//Get screen size
	Glib::RefPtr<Gdk::Screen> screen = Gdk::Screen::get_default();
	int width = screen->get_width();
	int height = screen->get_height();

	//Init notebook
	notebook = new Gtk::Notebook();

	//Fullscreen if small enough, otherwise disable resize
	if(width <= screen_width && height <= screen_height)
	{
	  fullscreen();
	}
	else
	{
	  property_resizable() = false;
	  notebook->set_size_request(screen_width, screen_height);
	}

	//Add idle page to notebook
	NESC::Pages::IdlePage *idlepage = new NESC::Pages::IdlePage();
	notebook->append_page(*idlepage, "idle");

	//Add notebook to MainWindow Object
	add(*notebook);

	//Show all MainWindow children (notebook)
	show_all_children();
}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

