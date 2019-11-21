/*
 * Globals.h
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_

#define screen_width	800
#define screen_height	480

#include <gtkmm/image.h>
#include <gtkmm/stack.h>
#include <thread>

#include "Database.h"

using namespace std;

namespace Globals
{
    extern NESC::Database g_db;
    extern thread *g_dbthread;
    extern Gtk::Stack* container;
}
#endif /* GLOBALS_H_ */
