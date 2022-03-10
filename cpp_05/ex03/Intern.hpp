#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	~Intern(void);
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);

	Form *makeForm(std::string form, std::string target);
};
#endif
