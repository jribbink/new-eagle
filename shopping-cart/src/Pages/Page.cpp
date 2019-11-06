/*
 * Page.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "Page.h"

#include <limits.h>

#include <glibmm/ustring.h>

namespace NESC
{
	Page::Page() {

	}

	void Page::ImportGlade(Glib::ustring glade)
	{
		builder = Gtk::Builder::create_from_file(glade + ".glade");

		Gtk::Fixed *fixed;
		builder->get_widget(glade, fixed);
		add(*fixed);
	}

	Page::~Page() {
		// TODO Auto-generated destructor stub
	}
};
