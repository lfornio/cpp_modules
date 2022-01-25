#include "phonebook.hpp"

int main()
{
    std::string line;
    Phonebook first_phonebook;
    int i;
    int count_contacts;
    count_contacts = 0;
    i = 0;

    std::cout << "Hello!" << std::endl;
    while (true)
    {
        std::cout << "Please, enter the command: ADD, SEARCH or EXIT." << std::endl;
        std::getline(std::cin, line);
        if (!line.compare("ADD"))
        {
            i = first_phonebook.addContact(i);
            count_contacts++;
            if (count_contacts > SIZE)
                count_contacts = SIZE;
            if (i == SIZE)
                i = 0;
        }
        else if (!line.compare("SEARCH"))
        {
            first_phonebook.printTabContacts(count_contacts);
            if (count_contacts > 0)
                first_phonebook.searchContact(count_contacts);
        }
        else if (!line.compare("EXIT"))
            break;
        else
            continue;
    }
    std::cout << "The program finished." << std::endl;
    return (0);
}