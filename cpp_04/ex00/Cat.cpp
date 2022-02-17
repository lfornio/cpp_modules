#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Default constructor called Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called Cat" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor called Cat" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called Cat" << std::endl;
    this->type = other.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow-Meow" << std::endl;
}