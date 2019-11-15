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

#include "Database.h"

namespace Globals
{
    extern NESC::Database db;
}
#endif /* GLOBALS_H_ */
