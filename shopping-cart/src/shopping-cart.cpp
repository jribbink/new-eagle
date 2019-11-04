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
	  Gtk::Main kit(argc, argv);

	  Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create_from_file("main.glade");

	  Gtk::Window *win;
	  builder->get_widget("winobj", win);

	  Glib::RefPtr<Gdk::Screen> screen = Gdk::Screen::get_default();
	  int width = screen->get_width();
	  int height = screen->get_height();

	  if(width < screen_width && height < screen_height)
		  win->fullscreen();

	  Gtk::Main::run(*win);

  return 0;
}