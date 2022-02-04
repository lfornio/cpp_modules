#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Ben("Ben");

    Ben.attack("Bob");
    Ben.takeDamage(3);
    Ben.beRepaired(5);

    return 0;
}
