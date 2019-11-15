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
		Gtk::Notebook* notebook = ((MainWindow*)this->get_toplevel())->notebook;
		notebook->append_page(*main, "main");
		notebook->show_all();
		notebook->set_current_page(1);
	}
    
    void IdlePage::scaleBg()
    {
        //Scale image
		Gtk::Image *img;
        Gtk::Notebook* notebook = ((MainWindow*)this->get_toplevel())->notebook;
		builder->get_widget("bg", img);
        Gtk::Allocation alloc = notebook->get_allocation();
        Glib::RefPtr<Gdk::Pixbuf> pixbuf = Gdk::Pixbuf::create_from_file("background.png");
        pixbuf->scale_simple(alloc.get_width(), alloc.get_height(), Gdk::INTERP_BILINEAR);
        img->set(pixbuf);
    }

	IdlePage::~IdlePage() {
		// TODO Auto-generated destructor stub
	}
}
