#include "Intern.hpp"

Intern::Intern()
{
    std::cout << GREEN << "Default constructor called Intern" << END << std::endl;
}

Intern::~Intern()
{
    std::cout << RED << "Destructor called Intern" << END << std::endl;
}

Form *Intern::makeForm(std::string form, std::string target)
{
    Form *ptr = NULL;
    std::string forms[3] = {"ShrubberyCreationForm",
                            "RobotomyRequestForm",
                            "PresidentialPardonForm"};
    int i = 0;
    while (i < (int)forms->length())
    {
        if (forms[i].compare(form) == 0)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        ptr = new ShrubberyCreationForm(target);
        break;
    case 1:
        ptr = new RobotomyRequestForm(target);
        break;
    case 2:
        ptr = new PresidentialPardonForm(target);
        break;

    default:
        std::cout << RED_B << "Unknown form" << END << std::endl;
        return NULL;
    }
    std::cout << BLUE << "Intern creates " << ptr->getName() << END << std::endl;
    return ptr;
}