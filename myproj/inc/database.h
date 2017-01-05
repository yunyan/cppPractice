#ifndef _C_DATABASE_H_H
#define _C_DATABASE_H_H

#include <string>
#include <memory>

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>

#include "project.h"



typedef std::unique_ptr<sql::Connection> MySqlConnection;
typedef std::unique_ptr<sql::Statement> MySqlStatement;


class Database
{
public:

    Database(std::string url, std::string users, std::string pass);

    virtual ~Database ();
    
    bool CreateTable(std::string tablename, std::string dbname = nullptr); 

    bool Dummy();

private:

    const MySqlConnection& GetConnectionInstance();

    std::string db_url_;
    std::string db_username_;
    std::string db_pass_;
    MySqlConnection db_conn_;
};

#endif
