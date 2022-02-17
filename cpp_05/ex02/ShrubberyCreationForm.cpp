#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    std::cout << GREEN << "Default constructor called ShrubberyCreationForm" << END << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << "Destructor called ShrubberyCreationForm" << END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
    this->target = other.target;
    std::cout << GREEN << "Copy constructor called ShrubberyCreationForm" << END << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    this->Form::operator=(other);
    this->target = other.target;
    std::cout << "Copy assignment operator called ShrubberyCreationForm" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        std::ofstream fout;
        std::string name_file = target + "_shrubbery";

        fout.open(name_file.c_str());
        if (!fout.is_open())
            throw "File not open";
        fout << "   ****" << '\n';
        fout << "  ******" << '\n';
        fout << " ********" << '\n';
        fout << "**********" << '\n';
        fout << " ********" << '\n';
        fout << "  ******" << '\n';
        fout << "    **" << '\n';
        fout << "    **" << '\n';
        fout << "    **" << '\n';
        fout.close();
        std::cout << BLUE << executor.getName() << " bureaucrat \033[1;32mexecuted\033[0m " << BLUE
                  << this->getName() << " form" << END << std::endl;
    }
    else if (this->getSign() == false)
        throw "Bureaucrat not execute ShrubberyCreationForm. Form not signed";
    else
    {
        std::cout << RED_B << "Bureaucrat " << executor.getName() << " did not execute ShrubberyCreationForm." << END << std::endl;
        throw Form::GradeTooHighException();
    }
}
