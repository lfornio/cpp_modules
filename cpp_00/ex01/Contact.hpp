#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
public:
    void setContact();
    void printContactFull();
    void printContactStr(int index);
    std::string cropContact(std::string s);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};
#endif
