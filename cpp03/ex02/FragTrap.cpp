#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap() {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

// Assignment operator
FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
    if (this != &fragTrap) {
        ClapTrap::operator=(fragTrap);
    }
    std::cout << "FragTrap assignment operator called" << std::endl;
    return *this;
}

// highFivesGuys method
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap requests high fives!" << std::endl;
}