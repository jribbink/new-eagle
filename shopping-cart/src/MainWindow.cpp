/*
 * MainWindow.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "MainWindow.h"

MainWindow::MainWindow() {
	//Get screen size
	Glib::RefPtr<Gdk::Screen> screen = Gdk::Screen::get_default();
	int width = screen->get_width();
	int height = screen->get_height();

	//Fullscreen if small enough, otherwise disable resize
	if(width < screen_width && height < screen_height)
	{
	  fullscreen();
	}
	else
	{
	  property_resizable() = false;
	  set_default_size(screen_width, screen_height);
	}

	stack = new Gtk::Notebook();
	IdlePage *idlepage = new IdlePage();
	stack->append_page(*idlepage, "idle");

	/*MainPage* main = new MainPage();
	stack->append_page(*main, "main");*/

	/*MainPage* main = new MainPage();
	box->pack_start(*main);
	box->remove(*idlepage);*/

	add(*stack);
	show_all_children();
}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

