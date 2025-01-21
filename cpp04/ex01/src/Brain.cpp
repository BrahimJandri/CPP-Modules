#include "../headers/Brain.hpp"

// default constructor
Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = "default";
    }
    std::cout << "Brain constructor called" << std::endl;
}

// copy constructor
Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

// assignment operator
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

// destructor
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
