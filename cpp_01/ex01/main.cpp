#include "Zombie.hpp"
#include <limits>

int main(void)
{
    int N;
    N = 15;
    Zombie *horde;
    horde = zombieHorde(N, "Ben");
    if (!horde)
        return (1);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}