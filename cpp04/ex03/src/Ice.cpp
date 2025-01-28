#include "../header/Ice.hpp"
#include "../header/ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria(other.getType()) {}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
    {
        type = other.getType();
    }
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}