#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"
# include <ostream>
# include <cmath>

class Point
{
	Fixed const	x;
	Fixed const	y;

public:
	Point(void);
	~Point(void);
	Point(const float a, const float b);
	Point(const Point &other);
	Point	&operator=(const Point &other);
	float	getX(void) const;
	float	getY(void) const;
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif
