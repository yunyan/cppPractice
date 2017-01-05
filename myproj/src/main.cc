#include <iostream>
#include <vector>
#include "database.h"

using namespace std;

int main()
{

    unique_ptr<Database> db(new Database("localhost", "root", "root"));

    db->createTable("sql_test", "test");

    return 0;
}
