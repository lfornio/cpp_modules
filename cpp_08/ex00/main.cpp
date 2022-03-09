#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector(5);

    for (int i = 0; i < (int)myVector.size(); i++)
        myVector[i] = i + 1;
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    try
    {
        easyfind(myVector, 4);
        easyfind(myVector, 1);
        easyfind(myVector, 5);
        easyfind(myVector, 6);
    }
    catch (const std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}