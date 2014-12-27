#include <iostream>
#include "miniVector.h"

using namespace miniSTL;


class test {
		public:
		int a;
		int b;
		int kick(int a, int b);
};

int main()
{
	Vector<int> v(3);
	std::cout<<v.size()<<std::endl;
	Vector<int>::iterator it;
	for(it = v.begin(); it!=v.end(); it++){
		std::cout<<*it<<std::endl;
	}

	return 1;
}
