#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
    name = "Default";
    ClapTrap::name = name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap parameterized constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap) {
    name = diamondTrap.name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

// Assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
    if (this != &diamondTrap) {
        ClapTrap::operator=(diamondTrap);
        ScavTrap::operator=(diamondTrap);
        FragTrap::operator=(diamondTrap);
        name = diamondTrap.name;
    }
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    return *this;
}

// attack method
void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

// whoAmI method
void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

// takeDamage method
void DiamondTrap::takeDamage(unsigned int amount) {
    ClapTrap::takeDamage(amount);
}

// beRepaired method
void DiamondTrap::beRepaired(unsigned int amount) {
    ClapTrap::beRepaired(amount);
}