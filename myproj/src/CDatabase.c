#include "CDatabase.h"

CDatabase::CDatabase()
{
    mDBName = "/home/yunyan/workspace/cppPractice/myproj/database/test";
}

CDatabase::CDatabase(string DBName)
{
}

CDatabase::~CDatabase()
{
    if(mDB){
        sqlite3_close_v2(mDB);
        mDB = NULL;
    }
}
sqlite3* CDatabase::getInstance()
{
    if(!mDB){
        sqlite3_open_v2(mDBName, &mDB, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE);
    }
    return mDB;
}
