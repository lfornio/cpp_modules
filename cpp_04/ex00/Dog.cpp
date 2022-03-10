#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Default constructor called Dog" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called Dog" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.type;
	std::cout << "Copy constructor called Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	std::cout << "Copy assignment operator called Dog" << std::endl;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof-Woof" << std::endl;
}
