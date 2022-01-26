#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
    name = str;
    type = NULL;
}
HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon &s)
{
    type = &s;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their ";
    if (!type)
        std::cout << "hands" << std::endl;
    else
        std::cout << type->getType() << std::endl;
}