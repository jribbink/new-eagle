/*
 * Database.cpp
 *
 *  Created on: Nov. 5, 2019
 *      Author: jordan
 */

#include "Database.h"

#include <iostream>

using namespace std;

namespace NESC {

Database::Database() {
    
}

void Database::connect() {
    cout << "hey gayy" << endl;
    
	try {
	  /* Create a connection */
	  driver = get_driver_instance();
      cout <<"e" <<endl;
	  con = driver->connect("tcp://neweaglepos.com:3306", "neweagle", "neweagle");
      cout <<"e" <<endl;
	  /* Connect to the MySQL test database */
	  con->setSchema("neweagle_db");
      
      cout <<"e" <<endl;

	  stmt = con->createStatement();
	  res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
	  while (res->next()) {
	    cout << "\t... MySQL replies: ";
	    /* Access column data by alias or column name */
	    cout << res->getString("_message") << endl;
	    cout << "\t... MySQL says it again: ";
	    /* Access column data by numeric offset, 1 is the first column */
	    cout << res->getString(1) << endl;
	  }
	  delete res;
	  delete stmt;
	  delete con;

	} catch (sql::SQLException &e) {
	  cout << "# ERR: SQLException in " << __FILE__;
	  cout << "(" << __FUNCTION__ << ") on line "
	     << __LINE__ << endl;
	  cout << "# ERR: " << e.what();
	  cout << " (MySQL error code: " << e.getErrorCode();
	  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
	}

	cout << endl;
}

Database::~Database() {
	// TODO Auto-generated destructor stub
}

} /* namespace NESC */
