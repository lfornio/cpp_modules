#include "Zombie.hpp"
#include <climits>

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 0 || N > INT_MAX)
    {
        std::cout << "The N is not valid" << std::endl;
        return (NULL);
    }
    Zombie *ptr;
    ptr = new Zombie[N];
    if (!ptr)
    {
        std::cout << "Memory error" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        ptr[i].setName(name);

    return (ptr);
}
