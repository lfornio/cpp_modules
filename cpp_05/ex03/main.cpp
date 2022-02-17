#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form *rrf;
    rrf = someRandomIntern.makeForm("hello", "Bender");
    // rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
    // // rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    // // rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    // std::cout << *rrf << std::endl;
    // Bureaucrat me("ME", 1);
    // me.signForm(*rrf);
    // std::cout << *rrf << std::endl;
    // me.executeForm(*rrf);
    delete rrf;

    return 0;
}