#include <iostream>
#include <string>
#include <algorithm>
#include "miniVector.h"

using namespace miniSTL;

#if 0
template <class T>
Vector<T>::Vector()
{
    vectorSize = 0;
    vectorCapacity = 0;
    buffer = 0;
}

template <class T>
Vector<T>::Vector(unsigned int size)
{
	vectorSize = size;
	vectorCapacity = size;
	buffer = new T*[size];
}

template <class T>
Vector<T>::~Vector()
{
	if(buffer){
		delete[] buffer;
	}
}

#endif
