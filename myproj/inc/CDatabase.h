#ifndef _C_DATABASE_H_H
#define _C_DATABASE_H_H

#include <string>
#include "sqlite/sqlite3.h"

class CDatabase
{
public:

    CDatabase () : mDBName(NULL), mDB(NULL);
    CDatabase (String DBName) : mDBName(DBName), mDB(NULL);

    virtual ~CDatabase ();
    
    sqlite3* getInstance();
private:
    String mDBName;
    sqlite3 * mDB;
};

#endif
