#include <iostream>
#include "miniVector.h"

using namespace miniSTL;



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
