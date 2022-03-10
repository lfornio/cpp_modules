#include "Animal.hpp"

Animal::Animal(void)
{
	type = "Animal";
	std::cout << "Default constructor called Animal" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called Animal" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Copy constructor called Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	std::cout << "Copy assignment operator called Animal" << std::endl;
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}

// void Animal::makeSound(void) const
// {
//     std::cout << "Default sound" << std::endl;
// }
