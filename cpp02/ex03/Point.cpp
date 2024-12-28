#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(float x, float y) : x(x), y(y)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
    std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        const_cast<Fixed &>(x) = other.x;
        const_cast<Fixed &>(y) = other.y;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
