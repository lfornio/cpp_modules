#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void addTwo(T &n)
{
	n += 2;
}

template <typename T>
void iter(T *arr, int len, void (*fun)(T &n))
{
	for (int i = 0; i < len; i++)
		fun(arr[i]);
}

#endif
