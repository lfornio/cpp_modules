#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Noname"), grade(150)
{
	std::cout << GREEN << "Default constructor called Bureaucrat" << END << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
	std::cout << GREEN << "Constructor with parametrs called Bureaucrat" << END << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED << "Destructor called Bureaucrat" << END << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: name(other.name), grade(other.grade)
{
	std::cout << "Copy constructor called Bureaucrat" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	// this->name = other.name; // name const
	this->grade = other.grade;
	std::cout << "Copy assignment operator called Bureaucrat" << std::endl;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->name;
}

int Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::increment(void)
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->grade--;
	std::cout << BLUE << this->getName() << ": level ↑, now = " << this->getGrade() << END << std::endl;
}

void Bureaucrat::decrement(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->grade++;
	std::cout << BLUE << this->getName() << ": level ↓, now = " << this->getGrade() << END << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other)
{
	os << YELLOW << other.getName() << ", bureaucrat grade " << other.getGrade() << END;
	return os;
}
