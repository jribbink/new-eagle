/*
 ============================================================================
 Name        : shopping-cart.cpp
 Author      : New Eagle
 Version     :
 Copyright   : Copyright New Eagle 2019
 Description : Hello World in gttkmm
 ============================================================================
 */

#include "HelloWorld.h"
#include <gtkmm/main.h>
#include <gtkmm/builder.h>
#include <gtkmm/window.h>
#include <gdkmm/screen.h>

#define screen_width	400
#define screen_height	300

int main (int argc, char *argv[])
{
	//Initialize gtkmm
	Gtk::Main kit(argc, argv);

	//Load design from file
	Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create();
	builder->add_from_file("main.glade");
	builder->add_from_file("idle.glade");

	//Get window object from builder
	Gtk::Window *win;
	builder->get_widget("idlewindow", win);

	//Get screen size
	Glib::RefPtr<Gdk::Screen> screen = Gdk::Screen::get_default();
	int width = screen->get_width();
	int height = screen->get_height();

	//Fullscreen if small enough, otherwise disable resize
	if(width < screen_width && height < screen_height)
	  win->fullscreen();
	else
	  win->property_resizable() = false;

	//Main application method, show window
	Gtk::Main::run(*win);

	return 0;
}
