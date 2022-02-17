#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Default constructor called Cure" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Destructor called Cure" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    // std::cout << "Copy constructor called Cure" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    // std::cout << "Copy assignment operator called Cure" << std::endl;
    this->type = other.type;
    return *this;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    // std::cout << RED << "clone Cure" << END << std::endl;
    AMateria *ptr = new Cure();
    return ptr;
}
