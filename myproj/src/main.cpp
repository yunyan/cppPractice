#include <iostream>
#include <vector>
#include "CDatabase.h"

using namespace std;

int main(int argc, char** argv)
{
    CDatabase * db = new CDatabase("/home/yunyan/workspace/cppPractice/myproj/database/test");
    sqlite3 dbhandler = db->getInstance();
    return 1;
}
