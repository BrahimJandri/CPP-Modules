#include "WrongCat.hpp"

// default constructor
WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

// assignment operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

// destructor
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
}

