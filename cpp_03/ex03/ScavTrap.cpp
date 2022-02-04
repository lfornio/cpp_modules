#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default constructor called ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Constructor with parameters called ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called ScavTrap." << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
	std::cout << "Copy constructor called ScavTrap." << std::endl;
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
    int damage = 5;
    attackDamage += damage;
    energyPoints--;
    std::cout << "\033[34mScavTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!\033[0m" << std::endl;

    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
    if (energyPoints <= 0)
    {
        std::cout << "\033[31mScavTrap " << name << " died. No energy\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void ScavTrap::guardGate(void)
{
	std::cout << "\033[35mScavTrap " << name << " is now in Gate keeper mode\033[0m" << std::endl;
}
