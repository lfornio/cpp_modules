#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
    std::cout << GREEN << "Default constructor called RobotomyRequestForm" << END << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << "Destructor called RobotomyRequestForm" << END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
    this->target = other.target;
    std::cout << GREEN << "Copy constructor called RobotomyRequestForm" << END << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->Form::operator=(other);
    this->target = other.target;
    std::cout << "Copy assignment operator called RobotomyRequestForm" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        srand(time(0));
        std::cout << BLUE << "Bzzzzzz......Bzzzzzz......Bzzzzzz" << END << std::endl;
        if (rand() % 2 == 0)
        {
            std::cout << BLUE << executor.getName() << " bureaucrat " << target << " \033[1;32mhas been robotomized successfully\033[0m " << BLUE
                      << this->getName() << END << std::endl;
        }
        else
        {
            std::cout << BLUE << executor.getName() << " bureaucrat " << target << " \033[1;31mhas not been robotomized successfully\033[0m " << BLUE
                      << this->getName() << END << std::endl;
        }
    }
    else if (this->getSign() == false)
        throw "Bureaucrat not execute RobotomyRequestForm. Form not signed";
    else
    {
        std::cout << RED_B << "Bureaucrat " << executor.getName() << " did not execute RobotomyRequestForm." << END << std::endl;
        throw Form::GradeTooHighException();
    }
}
