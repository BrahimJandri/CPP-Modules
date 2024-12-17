#pragma ONCE

class Fixed
{
    int fixed_point;
    static const int fractional;

public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
};