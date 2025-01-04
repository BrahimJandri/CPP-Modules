#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(), Hit_Points(10), Energy_Points(10), Attack_Damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : Name(name), Hit_Points(10), Energy_Points(10), Attack_Damage(0) {}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy Assignment operator called" << std::endl;
    if (this != &other)
    {
        this->Energy_Points = other.Energy_Points;
        this->Attack_Damage = other.Attack_Damage;
        this->Hit_Points = other.Hit_Points;
        this->Name = other.Name;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
