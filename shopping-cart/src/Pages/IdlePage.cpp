/*
 * IdlePage.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "IdlePage.h"

namespace NESC::Pages
{
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
		MainPage* main = new MainPage();
		Globals::container->add(*main, "main");
		main->show();
		Globals::container->set_visible_child(*main);
	}
    
    void IdlePage::scaleBg()
    {
        //Scale image
		Gtk::Image *img;
		builder->get_widget("bg", img);
        Gtk::Allocation alloc = Globals::container->get_allocation();
        Glib::RefPtr<Gdk::Pixbuf> pixbuf = Gdk::Pixbuf::create_from_file("background.png");
        pixbuf->scale_simple(alloc.get_width(), alloc.get_height(), Gdk::INTERP_BILINEAR);
        img->set(pixbuf);
    }

	IdlePage::~IdlePage() {
		// TODO Auto-generated destructor stub
	}
}
