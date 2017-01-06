#include <iostream>
#include <vector>
#include "CDatabase.h"

using namespace std;

int main(int argc, char** argv)
{

    unique_ptr<CDatabase> db(new CDatabase("localhost", "root", "root"));

    db->createTable("sql_test", "test");

    return 0;
}
