#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{	
	private:
		T *_arr;
		unsigned int _size;
	public:
	
		Array()
		{
			_arr = new T();
			_size = 0;
		}
		Array(unsigned int n)
		{
			_arr = new T[n];
			_size = n;
			for (unsigned int i = 0; i < _size; i++) 
            	_arr[i] = T(); 
		}
		Array(Array const &other)
		{
			_size = other._size;
			_arr = new T(_size);
			for (unsigned int i = 0; i < _size; ++i)
                _arr[i] = other._arr[i];
		}
		Array &operator=(Array const &Array)
		{
			if (this != &Array) 
			{
            	delete[] _arr;
            	_size = Array._size;
            	_arr = new T[_size];
            	for (unsigned int i = 0; i < _size; ++i)
                	_arr[i] = Array._arr[i];
        	}
       		return *this;
		}
		T &operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Index out of range");
			return (_arr[index]);
		}
		~Array() 
		{
			delete [] _arr;
		}

		unsigned int size(void) const
		{
			return (_size);
		}
};