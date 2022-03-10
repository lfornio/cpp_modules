#include "Phonebook.hpp"

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {}

int Phonebook::addContact(int index, int count)
{
	if (count >= SIZE)
		contacts[index].freeContact();
	contacts[index].setContact();
	return (index + 1);
}

void Phonebook::printContactFull(int index)
{
	contacts[index].printContactFull();
}

void printTab()
{
	for (int i = 0; i < 45; i++)
		std::cout << BLUE << "-";
	std::cout << std::endl;
	std::cout << "|" << std::setw(10);
	std::cout << "index"
			  << "|";
	std::cout << std::setw(10);
	std::cout << "first name"
			  << "|";
	std::cout << std::setw(10);
	std::cout << "last name"
			  << "|";
	std::cout << std::setw(10);
	std::cout << "nickname"
			  << "|" << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << "-";
	std::cout << END << std::endl;
}

void Phonebook::printTabContacts(int number)
{
	printTab();
	for (int i = 0; i < number; i++)
		contacts[i].printContactStr(i + 1);
}

void Phonebook::searchContact(int number)
{
	int index;

	std::cout << GREEN << "Which contact to show in more detail: from " << 1 << " to " << number << END << std::endl;
	std::cin >> index;
	if (std::cin.fail())
		std::cin.clear();
	if (index > 0 && index <= number)
		contacts[index - 1].printContactFull();
	else
		std::cout << RED << "There is no such contact" << END << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
