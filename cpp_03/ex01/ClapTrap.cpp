#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    name = "Noname";
    hitPoints = 0;
    energyPoints = 0;
    attackDamage = 0;
    std::cout << "Default constructor called ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called ClapTrap"  << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "Constructor with parameters called ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy constructor called ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Copy assignment operator called ClapTrap" << std::endl;

    return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    energyPoints--;
    std::cout << "\033[32m" << name << " repaired!\033[0m" << std::endl;
    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
    if (energyPoints <= 0)
    {
        std::cout << "\033[31m" << name << " died. No energy\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void ClapTrap::attack(const std::string &target)
{
    int damage = 2;
    attackDamage += damage;
    energyPoints--;
    std::cout << "\033[34mClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!\033[0m" << std::endl;

    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
    if (energyPoints <= 0)
    {
        std::cout << "\033[31mClapTrap " << name << " died. No energy\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    std::cout << "\033[33m" << name << " take damage\033[0m" << std::endl;

    std::cout << "Now: hitPoint = " << hitPoints
              << "; energiPoints = " << energyPoints
              << "; attackDamage = " << attackDamage << std::endl;
    if (hitPoints <= 0)
    {
        std::cout << "\033[31m" << name << " died. No hit points\033[0m" << std::endl;
        exit(EXIT_FAILURE);
    }
}




