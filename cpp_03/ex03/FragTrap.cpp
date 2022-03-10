#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "Frag";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default constructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Constructor with parameters called FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy constructor called FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy assignment operator called FragTrap" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[36mFragTrap " << name << " says high five\033[0m" << std::endl;
}
