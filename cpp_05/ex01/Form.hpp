#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <ostream>
#include <exception>
#include "Bureaucrat.hpp"

#define YELLOW "\033[33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define END "\033[0m"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    const int _gradeSign;
    const int _gradeExec;
    bool _sign;

public:
    Form(std::string name, int gradeSign, int gradeExec);
    ~Form();
    Form(const Form &other);
    Form &operator=(const Form &other);

    std::string getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool getSign(void) const;
    void beSigned(const Bureaucrat &bur);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &other);

#endif