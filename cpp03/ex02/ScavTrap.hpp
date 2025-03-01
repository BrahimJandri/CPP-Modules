#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavTrap);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &scavTrap);
    void attack(const std::string &target);
    void guardGate();
};

#endif
