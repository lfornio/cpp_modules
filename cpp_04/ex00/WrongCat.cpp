#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "Default constructor called WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Copy constructor called WrongCat" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Copy assignment operator called WrongCat" << std::endl;
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow-Meow" << std::endl;
}