#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooLowException();
    _sign = false;
    std::cout << GREEN << "Default constructor called Form" << END << std::endl;
}

Form::~Form()
{
    std::cout << RED << "Destructor called Form" << END << std::endl;
}

Form::Form(const Form &other)
    : _name(other._name), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec), _sign(other._sign)
{
    std::cout << GREEN << "Copy constructor called Form" << END << std::endl;
}

Form &Form::operator=(const Form &other)
{
    // this->_name = other._name;               // name - const
    // this->_gradeSign = other._gradeSign;     //gradeSign - const
    // this->_gradeExec = other._gradeExec;     //gradeExec - const
    this->_sign = other._sign;
    std::cout << "Copy assignment operator called Form" << std::endl;
    return *this;
}

std::string Form::getName(void) const
{
    return this->_name;
}

int Form::getGradeSign(void) const
{
    return this->_gradeSign;
}

int Form::getGradeExec(void) const
{
    return this->_gradeExec;
}

bool Form::getSign(void) const
{
    return this->_sign;
}

void Form::beSigned(const Bureaucrat &bur)
{
    if (this->_sign == true)
    {
        std::cout << BLUE << this->getName() << " form is already signed" << END << std::endl;
        return;
    }
    else if (this->_gradeSign >= bur.getGrade())
    {
        this->_sign = true;
        std::cout << BLUE << bur.getName() << " bureaucrat \033[1;32msigned\033[0m " << BLUE << this->getName() << " form" << END << std::endl;
    }
    else
    {
        std::cout << BLUE << bur.getName() << " bureaucrat \033[1;31mcouldn’t sign\033[0m "
                  << BLUE << this->getName() << " form" << END << std::endl;
        throw GradeTooHighException();
    }
}

std::ostream &operator<<(std::ostream &os, const Form &other)
{
    os << YELLOW << other.getName() << ", form gradeSign " << other.getGradeSign() << " gradeExec " << other.getGradeExec() << " " << END;
    if (other.getSign() == true)
        os << "\033[1;32msigned\033[0m";
    else
        os << "\033[1;31munsigned\033[0m";
    return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade of form too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade of form too low";
}
