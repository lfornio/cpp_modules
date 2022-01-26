#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
public:
    HumanA(std::string str, Weapon &s);
    ~HumanA(void);
    void attack(void);

private:
    std::string name;
    Weapon &type;
};

#endif