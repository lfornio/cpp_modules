#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}
void Karen::debug(void)
{
    std::cout << "\033[1;35m[ DEBUG ]\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Karen::info(void)
{
    std::cout << "\033[1;35m[ INFO ]\033[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!!\n";
}
void Karen::warning(void)
{
    std::cout << "\033[1;35m[ WARNING ]\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Karen::error(void)
{
    std::cout << "\033[1;35m[ ERROR ]\033[0m" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n ";
}

void Karen::complain(std::string level)
{
    std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    i = 0;
    while (i < size)
    {
        if (level.compare(arr[i]) == 0)
            break;
        i++;
    }
    void (Karen::*Pointer[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    switch (i)
    {
    case 0:
        (this->*Pointer[0])();
        __attribute__((fallthrough));

    case 1:
        (this->*Pointer[1])();
        __attribute__((fallthrough));

    case 2:
        (this->*Pointer[2])();
        __attribute__((fallthrough));

    case 3:
        (this->*Pointer[3])();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
