#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = "No_target";
    std::cout << GREEN << "Default constructor called PresidentialPardonForm" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
    std::cout << GREEN << "Constructor with parametrs called PresidentialPardonForm" << END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << RED << "Destructor called PresidentialPardonForm" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
    this->target = other.target;
    std::cout << GREEN << "Copy constructor called PresidentialPardonForm" << END << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    this->setSign(other.getSign());
    this->target = other.target;
    std::cout << "Copy assignment operator called PresidentialPardonForm" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        std::cout << BLUE  << target << " \033[1;32mhas been pardoned by Zaphod Beeblebro\033[0m "<< std::endl;
    }
    else if (this->getSign() == false)
        throw "Bureaucrat not execute PresidentialPardonForm. Form not signed";
    else
    {
        std::cout << RED_B << "Bureaucrat " << executor.getName() << " did not execute PresidentialPardonForm." << END << std::endl;
        throw Form::GradeTooHighException();
    }
}
