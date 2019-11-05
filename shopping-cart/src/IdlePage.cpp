/*
 * IdlePage.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "IdlePage.h"

IdlePage::IdlePage()
{
	ImportGlade("idle");

	//Setup for click event
	Gtk::Button *btn;
	builder->get_widget("start", btn);
	btn->signal_clicked().connect( sigc::mem_fun(*this, &IdlePage::on_button_clicked) );
}

void IdlePage::on_button_clicked()
{
	std::cout << "The Button was clicked." << std::endl;

	MainPage* main = new MainPage();
	((MainWindow*)this->get_toplevel())->stack->append_page(*main, "main");
	((MainWindow*)this->get_toplevel())->stack->show_all();

	//((MainWindow*)this->get_toplevel())->stack->show_all();
	//this->get_toplevel()->show_all_children();
}

IdlePage::~IdlePage() {
	// TODO Auto-generated destructor stub
}

