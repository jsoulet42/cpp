
#pragma once

#include <iostream>

template <class T>
class Array
{
	private:
		T *_array;
		int _size;

	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array &operator=(Array const &rSym);
		Array(Array const &src);
		T operator[](int n) const;
		T &operator[](int n);
		int size() const;

	class outLimit: public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};

template <class T>
Array<T>::Array()
{
	this->_array = new T[0];
	this->_size = 0;
}

template <class T>
Array<T>::Array(Array<T> const &src)
{
	*this = src;
}

template <class T>
Array<T>::~Array()
{
	delete[] _array;
}

template <class T>
Array<T> &Array<T>::operator=(Array<T> const &rSym)
{
	delete [] this->_array;
	this->_array = new T[rSym._size];
	this->_size = rSym._size;
	for (int i = 0; i < rSym._size; i++)
		this->_array[i] = rSym._array[i];
	return *this;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	for (unsigned int i; i < n; i++)
		this->_array[i] = 0;
	this->_size = n;
}

template <class T>
T &Array<T>::operator[](int n)
{
	if (n > this->_size - 1)
		throw Array::outLimit();
	return this->_array[n];
}

template <class T>
T Array<T>::operator[](int n) const
{
	T	a;
	if (n > this->_size - 1)
		throw Array::outLimit();
	a = this->_array[n];
	return a;
}

template <class T>
int Array<T>::size() const
{
	return this->_size;
}

template <class T>
const char *Array<T>::outLimit::what() const throw()
{
	return ("indice is out of limits!");
}
