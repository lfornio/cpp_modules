#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\033[1;35mAddress:\033[0m" << std::endl;
    std::cout << "str\t\t" << &str << std::endl;
    std::cout << "stringPTR\t" << stringPTR << std::endl;
    std::cout << "stringREF\t" << &stringREF << std::endl;

    std::cout << "\033[1;35mValue:\033[0m" << std::endl;
    std::cout << "str\t\t" << str << std::endl;
    std::cout << "stringPTR\t" << *stringPTR << std::endl;
    std::cout << "stringREF\t" << stringREF << std::endl;

    return (0);
}
