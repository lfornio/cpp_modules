#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixedPoint = 0;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const int value)
{
    this->fixedPoint = value << bits;
}

Fixed::Fixed(const float value)
{
    this->fixedPoint = (int)(value * (1 << bits) + 1);
}

Fixed::Fixed(const Fixed &other)
{
    this->fixedPoint = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    this->fixedPoint = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    float res;

    res = (float)fixedPoint / (float)(1 << bits);
    return res;
}

int Fixed::toInt(void) const
{
    return (int)(this->fixedPoint >> bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &other)
{
    return this->fixedPoint > other.fixedPoint;
}

bool Fixed::operator>=(const Fixed &other)
{
    return this->fixedPoint >= other.fixedPoint;
}

bool Fixed::operator<(const Fixed &other)
{
    return this->fixedPoint < other.fixedPoint;
}

bool Fixed::operator<=(const Fixed &other)
{
    return this->fixedPoint <= other.fixedPoint;
}

bool Fixed::operator==(const Fixed &other)
{
    return this->fixedPoint == other.fixedPoint;
}

bool Fixed::operator!=(const Fixed &other)
{
    return !(this->fixedPoint == other.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed temp;
    temp.fixedPoint = this->fixedPoint + other.fixedPoint;
    return temp;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed temp;
    temp.fixedPoint = this->fixedPoint - other.fixedPoint;
    return temp;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed temp;
    temp.fixedPoint = (this->fixedPoint * other.fixedPoint) >> bits;

    return temp;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed temp;
    if (other.fixedPoint)
        temp.fixedPoint = (this->fixedPoint / other.fixedPoint) << bits;
    else
    {
        std::cout << "Cannot be divided by 0" << std::endl;
        return (Fixed(0));
    }
    return temp;
}

Fixed &Fixed::operator++(void)
{
    this->fixedPoint++;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    this->fixedPoint--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->fixedPoint++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->fixedPoint--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return b;
    else
        return a;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return b;
    else
        return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}