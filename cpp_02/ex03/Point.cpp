#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(), y()
{
}

Point::~Point(void)
{
}

Point::Point(const float a, const float b) : x(a), y(b)
{
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
}

Point &Point::operator=(const Point &other)
{
    const_cast<Fixed &>(x) = other.x;
    const_cast<Fixed &>(y) = other.y;
    return (*this);
}

float Point::getX(void) const
{
    float res;
    res = x.toFloat();
    return (res);
}

float Point::getY(void) const
{
    float res;
    res = y.toFloat();
    return (res);
}