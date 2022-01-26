#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}
void Karen::debug(void)
{
    std::cout << "\033[1;35mDEBUG:\033[0m";
    std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Karen::info(void)
{
    std::cout << "\033[1;35mINFO:\033[0m";
    std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!!\n";
}
void Karen::warning(void)
{
    std::cout << "\033[1;35mWARNING:\033[0m";
    std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Karen::error(void)
{
    std::cout << "\033[1;35mERROR:\033[0m";
    std::cout << " This is unacceptable! I want to speak to the manager now.\n ";
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
    if (i == size)
    {
        std::cout << "\033[1;35m" << level << ":\033[0m"
                  << " I don't know that" << std::endl;
        return;
    }
    void (Karen::*Pointer[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    (this->*Pointer[i])();
}
