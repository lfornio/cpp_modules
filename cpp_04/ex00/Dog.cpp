#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Default constructor called Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called Dog" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copy constructor called Dog" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Copy assignment operator called Dog" << std::endl;
    this->type = other.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof-Woof" << std::endl;
}