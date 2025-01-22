#include "../headers/Cat.hpp"


// default constructor
Cat::Cat() : AAnimal(), brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

// copy constructor
Cat::Cat(const Cat &other) : AAnimal(other), brain(new Brain(*other.brain)) // create a new brain object and copy the other's brain object
{
    std::cout << "Cat copy constructor called" << std::endl;
}

// assignment operator
Cat &Cat::operator=(const Cat &other) // create a new brain object and copy the other's brain object
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete brain; // delete the old brain object before assigning the new one
        brain = new Brain(*other.brain); // create a new brain object and copy the other's brain object
    }
    return *this; 
}


// destructor
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound() const
{
    std::cout << "Cat sound!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}