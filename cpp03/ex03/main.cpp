#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    DiamondTrap diamondTrap("DiamondTrap");
    diamondTrap.whoAmI();
    diamondTrap.attack("target");
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(10);

    DiamondTrap diamondTrapCopy(diamondTrap);
    diamondTrapCopy.attack("another target");

    DiamondTrap diamondTrapAssigned;
    diamondTrapAssigned = diamondTrap;
    diamondTrapAssigned.attack("yet another target");

    return 0;
}