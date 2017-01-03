#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Person {
    public:
        string name;
        shared_ptr<Person> mother;
        shared_ptr<Person> father;
}