#ifndef _C_DATABASE_H_H
#define _C_DATABASE_H_H

#include <string>
#include <memory>

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>

#include "project.h"



typedef std::unique_ptr<sql::Connection> mysql_connection;
typedef std::unique_ptr<sql::Statement> mysql_statement;


class Database
{
public:

    Database(std::string url, std::string users, std::string pass);

    virtual ~Database ();
    
    bool createTable(std::string tableName, std::string dbName = nullptr); 

    bool dummy();

private:

    const mysql_connection& getConnectionInstance();

    std::string m_db_url;
    std::string m_db_username;
    std::string m_db_pass;
    mysql_connection m_db_conn;
};

#endif
