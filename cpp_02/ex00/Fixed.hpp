#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed
{
    int fixedPoint;
    static const int bits = 8;

public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

#endif