#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

// Assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    if (this != &scavTrap)
    {
        ClapTrap::operator=(scavTrap);
    }
    std::cout << "ScavTrap assignment operator called" << std::endl;
    return *this;
}

// attack method
void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " can not attacks." << std::endl;
        return;
    }
    this->energyPoints -= 1;
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

// guardGate method
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}