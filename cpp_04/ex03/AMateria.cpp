#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "notype";
	// std::cout << "Default constructor called AMateria" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	// std::cout << "Constructor with parametrs called AMateria" << std::endl;
}

AMateria::~AMateria(void)
{
	// std::cout << "Destructor called AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	this->type = other.type;
	// std::cout << "Copy constructor called AMateria" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	// std::cout << "Copy assignment operator called AMateria" << std::endl;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* " << target.getName() << " *" << std::endl;
}
