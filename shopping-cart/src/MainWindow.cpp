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
    
    //Connect to keypress event
    this->add_events(Gdk::KEY_PRESS_MASK);
    this->signal_key_press_event().connect(sigc::mem_fun(*this, &MainWindow::keyPress));
    
    //Connect to database DO IT IN A DIFFERENT THREAD FUCKFACE
    //Globals::g_dbthread = new thread(sigc::mem_fun(Globals::g_db, &NESC::Database::connect));
    //Globals::g_db.connect();
}

gboolean MainWindow::keyPress(GdkEventKey *key)
{
    std::cout << key->keyval << std::endl;
    return true;
}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

