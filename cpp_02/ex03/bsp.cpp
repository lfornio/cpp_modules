#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float tmp1;
    float tmp2;
    float tmp3;

    tmp1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    tmp2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
    tmp3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
    if ((tmp1 > 0 && tmp2 > 0 && tmp3 > 0) || (tmp1 < 0 && tmp2 < 0 && tmp3 < 0))
        return true;
    else
        return false;
}
