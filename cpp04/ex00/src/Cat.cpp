#include "../headers/Cat.hpp"


// default constructor
Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

// copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

// assignment operator
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this; 
}


// destructor
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "Cat sound!" << std::endl;
}