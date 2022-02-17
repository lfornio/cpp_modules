#include "Scalar.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error argument" << std::endl;
        return 1;
    }
    Scalar num(argv[1]);
    Scalar b(num);
    num = b;
    try
    {
        num.foundType();
        num.printInfoConversion();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}