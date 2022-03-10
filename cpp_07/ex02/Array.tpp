#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	arr = NULL;
	size_arr = 0;
	// std::cout << "Constructor" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
	// std::cout << "Destructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	size_arr = n;
	if (n)
		arr = new T[n];
	else
		arr = NULL;
	// std::cout << "Constructor with parametrs" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
	size_arr = other.size_arr;
	arr = new T[other.size_arr];
	for (unsigned int i = 0; i < other.size_arr; i++)
		arr[i] = other.arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (arr)
		delete[] arr;
	size_arr = other.size_arr;
	arr = new T[other.size_arr];
	for (unsigned int i = 0; i < other.size_arr; i++)
		arr[i] = other.arr[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= size_arr)
		throw std::out_of_range("Index invalid");
	return arr[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return this->size_arr;
}

template <typename T>
void Array<T>::print(void) const
{
	for (unsigned int i = 0; i < size_arr; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
