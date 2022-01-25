#ifndef PHONEBOOK_HPP
#define PHONEBOOKT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Contact.hpp"

#define SIZE 8

class Phonebook
{
public:
    int addContact(int index);
    void printContactFull(int index);
    void printTabContacts(int number);
    void searchContact(int number);

private:
    Contact contacts[SIZE];
};

#endif