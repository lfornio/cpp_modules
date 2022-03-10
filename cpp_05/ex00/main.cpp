#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("A", 100);
        // Bureaucrat a("A", -100);
        // Bureaucrat a("A", 0);
        // Bureaucrat a("A", 250);
        std::cout << a << std::endl;
        a.increment();
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;

        // Bureaucrat b(a);   //copy
        // std::cout << b << std::endl;

        // Bureaucrat c("lol", 5); //=, name const
        // c = a;
        // std::cout << c << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << RED << ex.what() << END << std::endl;
    }

    return 0;
}
