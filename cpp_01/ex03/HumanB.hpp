#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
public:
    HumanB(std::string str);
    ~HumanB(void);
    void setWeapon(Weapon &s);
    void attack(void);

private:
    std::string name;
    Weapon *type;
};

#endif