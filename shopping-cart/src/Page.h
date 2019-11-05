/*
 * Page.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#ifndef PAGE_H_
#define PAGE_H_

#include <gtkmm/bin.h>
#include <gtkmm/builder.h>
#include <gtkmm/bin.h>
#include <gtkmm/fixed.h>

#include <glibmm/ustring.h>

#include <stdio.h>

namespace NESC
{
	class Page : public Gtk::Bin
	{
	public:
		Page();
		virtual ~Page();
	protected:
		Glib::RefPtr<Gtk::Builder> builder;
		void ImportGlade(Glib::ustring glade);
	};
};

#endif /* PAGE_H_ */
