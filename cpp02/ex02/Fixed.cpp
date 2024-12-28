#include "Fixed.hpp"

// Constructors and Destructor
Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : fixedPointValue(intValue << fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue) : fixedPointValue(roundf(floatValue * (1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->fixedPointValue = other.fixedPointValue;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Member Functions
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(fixedPointValue) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return fixedPointValue >> fractionalBits;
}

// Comparison Operators
bool Fixed::operator>(const Fixed &other) const
{
    return this->fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->fixedPointValue < other.fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->fixedPointValue >= other.fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->fixedPointValue <= other.fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->fixedPointValue == other.fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->fixedPointValue != other.fixedPointValue;
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement Operators
Fixed &Fixed::operator++()
{
    ++fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++fixedPointValue;
    return temp;
}

Fixed &Fixed::operator--()
{
    --fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --fixedPointValue;
    return temp;
}

// Min/Max Functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

// Overloaded Insertion Operator
std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}
