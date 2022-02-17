#include "phonebook.hpp"

int main()
{
    Phonebook my_phonebook;
    std::string line;
    int i;
    int count_contacts;
    count_contacts = 0;
    i = 0;

    std::cout << GREEN_BOLD << "Hello!" << END << std::endl;
    while (true)
    {
        std::cout << GREEN_BOLD << "Please, enter the command: ADD, SEARCH or EXIT." << END << std::endl;
        std::getline(std::cin, line);
        if (!line.compare("ADD"))
        {
            i = my_phonebook.addContact(i, count_contacts);
            count_contacts++;
            if (count_contacts > SIZE)
                count_contacts = SIZE;
            if (i == SIZE)
                i = 0;
        }
        else if (!line.compare("SEARCH"))
        {
            my_phonebook.printTabContacts(count_contacts);
            if (count_contacts > 0)
                my_phonebook.searchContact(count_contacts);
        }
        else if (!line.compare("EXIT"))
            break;
        else
            continue;
    }
    std::cout << RED << "The program finished." << END << std::endl;
    return (0);
}