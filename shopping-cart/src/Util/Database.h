/*
 * Inventory.h
 *
 *  Created on: Nov. 5, 2019
 *      Author: jordan
 */

#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

namespace NESC {

class Inventory {
private:
	sql::Driver *driver;
	sql::Connection *con;
	sql::Statement *stmt;
	sql::ResultSet *res;
public:
	Inventory();
	virtual ~Inventory();
};

} /* namespace NESC */

#endif /* INVENTORY_H_ */
