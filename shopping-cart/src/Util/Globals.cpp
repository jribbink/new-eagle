/*
 * Globals.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "Globals.h"

using namespace std;

namespace Globals
{
    NESC::Database g_db;
    thread *g_dbthread;
    Gtk::Stack* container;
}