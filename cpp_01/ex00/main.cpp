#include "Zombie.hpp"

int main(void)
{
    Zombie one("One");
    one.announce();

    Zombie *two;
    two = newZombie("Two");
    two->announce();

    randomChump("Three");

    delete two;
    return 0;
}