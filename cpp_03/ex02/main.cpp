#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap one("One");
    ScavTrap two("Two");
    FragTrap three("Three");
    one.attack("Two");
    two.attack("One");
    one.takeDamage(2);
    two.takeDamage(5);
    two.guardGate();
    one.beRepaired(1);
    three.highFivesGuys();

    return 0;
}
