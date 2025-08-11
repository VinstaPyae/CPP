#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
};

#endif