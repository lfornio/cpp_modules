#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Default constructor called Cat" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called Cat" << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->type = other.type;
	std::cout << "Copy constructor called Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	std::cout << "Copy assignment operator called Cat" << std::endl;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow-Meow" << std::endl;
}
