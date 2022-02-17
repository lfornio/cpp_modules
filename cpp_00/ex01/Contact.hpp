#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

#define GREEN "\033[32m"
#define GREEN_BOLD "\033[1;32m"
#define BLUE "\033[34m"
#define END "\033[0m"

class Contact
{
public:
    Contact();
    ~Contact();
    void setContact();
    void printContactFull();
    void printContactStr(int index);
    void freeContact();
    std::string cropContact(std::string s);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};
#endif
