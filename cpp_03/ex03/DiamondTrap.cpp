#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->name = "Diamond";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "Default constructor called DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;

	std::cout << "Constructor with parameters called DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy constructor called DiamondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "Copy assignment operator called DiamondTrap" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "\033[36mDiamondTrap name is " << this->name << ". ClapTrap name is " << ClapTrap::name << ".\033[0m" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

