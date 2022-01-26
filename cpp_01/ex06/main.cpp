#include "Karen.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error arguments" << std::endl;
        return(1);
    }
    std::string level = argv[1];
    Karen She;
    She.complain(level);

    return 0;
}