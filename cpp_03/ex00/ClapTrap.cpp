#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    name = "Noname";
    hitPoints = 0;
    energyPoints = 0;
    attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor with parameters called" << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;

    return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!hitPoints || !energyPoints)
    {
        std::cout << "\033[31mClapTrap died. No energy\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "\033[32mClapTrap repaired!\033[0m" << std::endl;
    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (!hitPoints || !energyPoints)
    {
        std::cout << "\033[31mClapTrap died. No energy\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
    energyPoints--;
    std::cout << "\033[34mClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!\033[0m" << std::endl;

    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
}
