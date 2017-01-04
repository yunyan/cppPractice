#include <iostream>
#include <vector>
#include "CDatabase.h"

using namespace std;

int main(int argc, char** argv)
{
    CDatabase * db = new CDatabase("localhost", "root", "root");

    db->createTable("sql_test", "aaa");

    return 0;
}
