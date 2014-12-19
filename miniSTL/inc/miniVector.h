#ifndef MINIVECTOR_H_
#define MINIVECTOR_H_

namespace miniSTL {

	template <class T>
	class Vector
	{
	public:
	    typedef T* iterator;
	    Vector();
	    Vector(unsigned int size);
#if 0
	    Vector(unsigned int size, const T& initial);
	    Vector(const Vector<T>& v);
#endif
	    ~Vector();
	
	    unsigned int size() const;
#if 0
	    unsigned int capacity() const;
	    bool empty() const;
	    iterator begin();
	    iterator end();
	    T& front();
	    T& back();
	    void push_back(const T& v);
	    void pop_back();
	    void reserve(unsigned int capacity);
	    void resize(unsigned int size);
	    T& operator[](unsigned int index);
	    Vector<T> & operator=(const Vector<T> & v);
#endif
	
	private:
	    unsigned int vectorSize;
	    unsigned int vectorCapacity;
	    T* buffer;
	};

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
	        buffer = new T[size];
	}
	
	template <class T>
	Vector<T>::~Vector()
	{
	        if(buffer){
	                delete[] buffer;
	        }
	}

	template <class T>
	unsigned int Vector<T>::size() const
	{
		return vectorSize;
	}

}


#endif
