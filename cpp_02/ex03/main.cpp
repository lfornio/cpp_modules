#include "Point.hpp"

int main(void)
{
    Point a(2, 1);
    Point b(6, 7);
    Point c(12, 4);
    // Point p(5, 3); // 1
    // Point p(2, 6); // 0
    Point p(2, 1); //0
    // Point p(5.35, 4.89); //1
    // Point p(0, 0); //0
    // Point p(-6.487, 8.245); //0
    bool res = bsp(a, b, c, p);
    if (res)
        std::cout << "A point in a triangle" << std::endl;
    else
        std::cout << "The point is \033[1;31mnot\033[0m in a triangle" << std::endl;
    return 0;
}
