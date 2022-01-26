#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->type = str;
}
Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
    const std::string &typeRef = this->type;
    return (typeRef);
}

void Weapon::setType(std::string str)
{
    this->type = str;
}