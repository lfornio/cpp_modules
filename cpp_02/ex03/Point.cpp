#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}
Point::~Point(void) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator=(const Point &other)
{
    const_cast<Fixed &>(x) = other.x;
    const_cast<Fixed &>(y) = other.y;
    return *this;
}

float Point::getX(void) const
{
    return (x.toFloat());
}

float Point::getY(void) const
{
    return (y.toFloat());
}
