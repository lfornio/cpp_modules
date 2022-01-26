#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    this->name = str;
}
Zombie::~Zombie(void)
{
    std::cout << name << " died" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}