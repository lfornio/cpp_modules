#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	/* ------------ ShrubberyCreationForm --------------------- */
	// try
	// {

		// Bureaucrat ben("BEN", 1); // ok
	//     // ShrubberyCreationForm form("home");
	//     // form.beSigned(ben); // sign
	//     // form.execute(ben);     // execute
	//     // // ben.executeForm(form); // execute
	//     // std::cout << form << std::endl;

	//     // Bureaucrat ben("BEN", 130); // grade of form too high
	//     // Bureaucrat rob("ROB", 150);
	//     // ShrubberyCreationForm form("sad");
	//     // form.beSigned(ben); // sign
	//     // form.execute(rob);  // execute
	//     // std::cout << form << std::endl;

	//     // Bureaucrat rob("ROB", 100);     // form not signed
	//     // ShrubberyCreationForm form("sad");
	//     // form.execute(rob); // execute
	//     // std::cout << form << std::endl;

	// }
	// catch (const char *s)
	// {
	//     std::cout << RED_B << s << END << std::endl;
	// }
	// catch (std::exception &ex)
	// {
	//     std::cout << RED_B << ex.what() << END << std::endl;
	// }

	/* ------------ RobotomyRequestForm --------------------- */
	// try
	// {
	//     Bureaucrat ben("BEN", 1); // ok
	//     RobotomyRequestForm form("home");
	//     form.beSigned(ben); // sign
	//     form.execute(ben); // execute
	//     // ben.executeForm(form);
	// }
	// catch (const char *s)
	// {
	//     std::cout << RED_B << s << END << std::endl;
	// }
	// catch (std::exception &ex)
	// {
	//     std::cout << RED_B << ex.what() << END << std::endl;
	// }

	/* ------------ PresidentialPardonForm --------------------- */
	// try
	// {
	//     Bureaucrat ben("BEN", 1);   // ok
	//     Bureaucrat zik("ZIK", 100); // grade low
	//     PresidentialPardonForm form("LOL");
	//     form.beSigned(ben); // sign
	//     form.execute(ben);  // execute
	//     // zik.executeForm(form);
	// }
	// catch (const char *s)
	// {
	//     std::cout << RED_B << s << END << std::endl;
	// }
	// catch (std::exception &ex)
	// {
	//     std::cout << RED_B << ex.what() << END << std::endl;
	// }

	return 0;
}
