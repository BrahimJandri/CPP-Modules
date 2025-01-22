#include "../headers/Dog.hpp"


// default constructor
Dog::Dog() : AAnimal(), brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}


// copy constructor
Dog::Dog(const Dog &other) : AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
}


// assignment operator
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete brain; // delete the old brain object before assigning the new one
        brain = new Brain(*other.brain); // create a new brain object and copy the other's brain object
    }
    return *this;
}

// destructor
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return brain;
}