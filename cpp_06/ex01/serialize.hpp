#ifndef SERILIZE_HPP
#define SERILIZE_HPP
#include <iostream>
#include <string>

struct Data
{
	int			a;
	std::string	str;
	float		f;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif
