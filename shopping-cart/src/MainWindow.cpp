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

	//Init container
	Globals::container = container = new Gtk::Stack();
    
	//Fullscreen if small enough, otherwise disable resize
	if(width <= screen_width && height <= screen_height)
	{
	  fullscreen();
	}
	else
	{
	  property_resizable() = false;
	  container->set_size_request(screen_width, screen_height);
	}

	//Add idle page to container
	NESC::Pages::IdlePage *idlepage = new NESC::Pages::IdlePage();
	container->add(*idlepage, "idle");
    container->set_visible_child(*idlepage);
    
	//Add container to MainWindow Object
	add(*container);

	//Show all MainWindow children (container)
	show_all_children();
    
    //Scale the background image
    idlepage->scaleBg();
    
    this->realize();
    this->get_window()->set_cursor(Gdk::Cursor::create(Gdk::BLANK_CURSOR));
    
    
    //Connect to database
    //Globals::g_dbthread = new thread(sigc::mem_fun(Globals::g_db, &NESC::Database::connect));
    //Globals::g_db.connect();
}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

