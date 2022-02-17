#ifndef PHONEBOOK_HPP
#define PHONEBOOKT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Contact.hpp"

#define SIZE 8
#define GREEN "\033[32m"
#define GREEN_BOLD "\033[1;32m"
#define BLUE "\033[34m"
#define RED "\033[31m"
#define END "\033[0m"

class Phonebook
{
public:
    Phonebook();
    ~Phonebook();
    int addContact(int index, int count);
    void printContactFull(int index);
    void printTabContacts(int number);
    void searchContact(int number);

private:
    Contact contacts[SIZE];
};

#endif