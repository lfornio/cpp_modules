#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setContact()
{
	while (first_name.empty())
	{
		std::cout << GREEN << "Please, enter the First Name:" << END << std::endl;
		std::getline(std::cin, first_name);
	}
	while (last_name.empty())
	{
		std::cout << GREEN << "Please, enter the Last Name:" << END << std::endl;
		std::getline(std::cin, last_name);
	}
	while (nickname.empty())
	{
		std::cout << GREEN << "Please, enter the Nickname:" << END << std::endl;
		std::getline(std::cin, nickname);
	}
	while (phone_number.empty())
	{
		std::cout << GREEN << "Please, enter the Phone Number:" << END << std::endl;
		std::getline(std::cin, phone_number);
	}
	while (darkest_secret.empty())
	{
		std::cout << GREEN << "Please, enter the Darkest Secret:" << END << std::endl;
		std::getline(std::cin, darkest_secret);
	}
	std::cout << GREEN << "The contact is added to the phonebook" << END << std::endl;
}

void Contact::freeContact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void Contact::printContactFull()
{
	std::cout << BLUE << "First Name: " << END << first_name << std::endl;
	std::cout << BLUE << "Last Name: " << END << last_name << std::endl;
	std::cout << BLUE << "Nickname: " << END << nickname << std::endl;
	std::cout << BLUE << "Phone Number: " << END << phone_number << std::endl;
	std::cout << BLUE << "Darkest Secret: " << END << darkest_secret << std::endl;
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

	std::cout << BLUE << "|" << END << std::setw(10);
	std::cout << index
			  << BLUE << "|" << END;
	std::cout << std::setw(10);
	std::cout << cropContact(first_name)
			  << BLUE << "|" << END;
	std::cout << std::setw(10);
	std::cout << cropContact(last_name)
			  << BLUE << "|" << END;
	std::cout << std::setw(10);
	std::cout << cropContact(nickname)
			  << BLUE << "|" << END << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << BLUE << "-" << END;
	std::cout << std::endl;
}
