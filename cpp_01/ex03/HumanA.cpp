#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &s) : name(str), type(s) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << type.getType() << std::endl;
}