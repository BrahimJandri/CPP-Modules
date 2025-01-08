#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ScavTrap scavTrap("Flan");
    scavTrap.guardGate();
    scavTrap.attack("Frtlan1");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);

    ScavTrap scavTrapCopy(scavTrap);
    scavTrapCopy.attack("Frtlan2");

    ScavTrap scavTrapAssigned;
    scavTrapAssigned = scavTrap;
    scavTrapAssigned.attack("Frtlan3");

    return 0;
}