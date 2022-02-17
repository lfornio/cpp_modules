#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    // std::cout << "Default constructor called Ice" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Destructor called Ice" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    // std::cout << "Copy constructor called Ice" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    // std::cout << "Copy assignment operator called Ice" << std::endl;
    this->type = other.type;
    return *this;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    // std::cout << RED << "clone Ice" << END << std::endl;
    AMateria *ptr = new Ice();
    return ptr;
}
