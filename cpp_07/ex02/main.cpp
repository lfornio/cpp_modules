#include "Array.hpp"

// int main(void)
// {
//     Array<int> a(7);
//     std::cout << "Array a = ";
//     a.print();
//     try
//     {
//         a[0] = 2;
//         a[2] = 6;
//         a[3] = 1;
//         a[4] = 10;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << e.what() << '\n';
//         return 1;
//     }
//     std::cout << "Array a = ";
//     a.print();
//     std::cout << "size_a = " << a.size() << std::endl;

//     Array<int> b(4);
//     b[0] = -6;
//     b = a;
//     std::cout << "Array b = ";
//     b.print();
//     std::cout << "size_b = " << b.size() << std::endl;

//     Array<int> c(a);
//     c[0] = 155;
//     std::cout << "Array c = ";
//     c.print();
//     std::cout << "size_c = " << c.size() << std::endl;

//     return 0;
// }

#include <iostream>
#include "Array.hpp"
#include <ctime>
#include <cstdlib>

#define MAX_VAL 10
int main(int, char **)
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    numbers.print();
    // SCOPE
    {
        Array<int> tmp = numbers;
        tmp.print();
        Array<int> test(tmp);
        test.print();
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    delete[] mirror; //
    return 0;
}