/*
 ============================================================================
 Name        : shopping-cart.cpp
 Author      : New Eagle
 Version     :
 Copyright   : Copyright New Eagle 2019
 Description : Hello World in gttkmm
 ============================================================================
 */

#include "MainWindow.h"


#include <gtkmm/main.h>
#include <gtkmm/builder.h>
#include <gtkmm/window.h>
#include <gdkmm/screen.h>
#include <gtkmm/fixed.h>

#include <iostream>

int main (int argc, char *argv[])
{
	//Initialize gtkmm
	Gtk::Main kit(argc, argv);

	//Setup window
	MainWindow *win = new MainWindow();

	//Main application method, show window
	Gtk::Main::run(*win);

	return 0;
}
