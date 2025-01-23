#include "../header/Cure.hpp"
#include "../header/ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria(other.getType()) {}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
    {
        type = other.getType();
    }
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}