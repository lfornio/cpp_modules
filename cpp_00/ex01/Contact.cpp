#include "Contact.hpp"

void Contact::setContact()
{
    while (first_name.empty())
    {
        std::cout << "Please, enter the First Name:" << std::endl;
        std::getline(std::cin, first_name);
    }
    while (last_name.empty())
    {
        std::cout << "Please, enter the Last Name:" << std::endl;
        std::getline(std::cin, last_name);
    }
    while (nickname.empty())
    {
        std::cout << "Please, enter the Nickname:" << std::endl;
        std::getline(std::cin, nickname);
    }
    while (phone_number.empty())
    {
        std::cout << "Please, enter the Phone Number:" << std::endl;
        std::getline(std::cin, phone_number);
    }
    while (darkest_secret.empty())
    {
        std::cout << "Please, enter the Darkest Secret:" << std::endl;
        std::getline(std::cin, darkest_secret);
    }
}

void Contact::printContactFull()
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

std::string Contact::cropContact(std::string s)
{
    std::string str;
    if (s.length() > 10)
    {
        str = s.substr(0, 9);
        str = str + ".";
    }
    else
        return s;
    return str;
}

void Contact::printContactStr(int index)
{

    std::cout << "|" << std::setw(10);
    std::cout << index
              << "|";
    std::cout << std::setw(10);
    std::cout << cropContact(first_name)
              << "|";
    std::cout << std::setw(10);
    std::cout << cropContact(last_name)
              << "|";
    std::cout << std::setw(10);
    std::cout << cropContact(nickname)
              << "|" << std::endl;
    for (int i = 0; i < 45; i++)
        std::cout << "-";
    std::cout << std::endl;
}
