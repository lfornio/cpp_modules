#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    fixed_point = value * (1 << bits);
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixed_point = (int)roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = other.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &other)
{
    return this->fixed_point > other.fixed_point;
}

bool Fixed::operator<(const Fixed &other)
{
    return this->fixed_point < other.fixed_point;
}

bool Fixed::operator>=(const Fixed &other)
{
    return this->fixed_point >= other.fixed_point;
}

bool Fixed::operator<=(const Fixed &other)
{
    return this->fixed_point <= other.fixed_point;
}

bool Fixed::operator==(const Fixed &other)
{
    return this->fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed &other)
{
    return this->fixed_point != other.fixed_point;
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed tmp;
    tmp.fixed_point = this->fixed_point + other.fixed_point;
    return tmp;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed tmp;
    tmp.fixed_point = this->fixed_point - other.fixed_point;
    return tmp;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed tmp;
    tmp.fixed_point = (this->fixed_point * other.fixed_point) / (1 << bits);
    return tmp;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed tmp;
    if (other.fixed_point)
        tmp.fixed_point = (this->fixed_point / other.fixed_point) * (1 << bits);
    else
    {
        std::cout << "Cannot be divided by 0" << std::endl;
        return (Fixed(0));
    }
    return tmp;
}

Fixed &Fixed::operator++()
{
    this->fixed_point++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->fixed_point--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp = *this;
    this->fixed_point++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp = *this;
    this->fixed_point--;
    return tmp;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

int Fixed::toInt(void) const
{
    return this->fixed_point / (1 << bits);
}

float Fixed::toFloat(void) const
{
    return (float)fixed_point / (float)(1 << bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    os << other.toFloat();
    return os;
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    return one.fixed_point > two.fixed_point ? two : one;
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two)
{
    return one.fixed_point > two.fixed_point ? two : one;
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    return one.fixed_point < two.fixed_point ? two : one;
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
    return one.fixed_point < two.fixed_point ? two : one;
}
