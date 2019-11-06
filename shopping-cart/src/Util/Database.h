/*
 * Database.h
 *
 *  Created on: Nov. 5, 2019
 *      Author: jordan
 */

#ifndef DATABASE_H_
#define DATABASE_H_

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

namespace NESC {

class Database {
private:
	sql::Driver *driver;
	sql::Connection *con;
	sql::Statement *stmt;
	sql::ResultSet *res;
public:
	Database();
	virtual ~Database();
};

} /* namespace NESC */

#endif /* DATABASE_H_ */
