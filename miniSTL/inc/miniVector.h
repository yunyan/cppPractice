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
	    ~Vector();
	
	    unsigned int size() const;
	    iterator begin();
	    iterator end();
#if 0
	    Vector(unsigned int size, const T& initial);
	    Vector(const Vector<T>& v);
	    unsigned int capacity() const;
	    bool empty() const;
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

	template <class T>
	iterator Vector<T>::begin()
	{
		return buffer;
	}

	template <class T>
	iterator Vector<T>::end()
	{
		return buffer+(size-1)*sizeof(T);
	}

}


#endif
