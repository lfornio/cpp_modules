#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap one("Sara");
    ScavTrap two("Zara");
    one.attack("Zara");
    two.attack("Sara");
    // two.takeDamage(200);
    two.takeDamage(4);
    one.beRepaired(2);
    two.guardGate();

    return 0;
}
