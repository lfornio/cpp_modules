#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
void easyfind(T a, int num)
{
	typename T::iterator it;

	it = std::find(a.begin(), a.end(), num);
	if (it != a.end())
		std::cout << num << ": Occurrence is found by index = " << std::distance(a.begin(), it) << std::endl;
	else
		throw std::invalid_argument("Occurrence is not found");
}
#endif
