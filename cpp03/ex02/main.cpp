#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap fragTrap("FragTrap");
    fragTrap.highFivesGuys();
    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);

    FragTrap fragTrapCopy(fragTrap);
    fragTrapCopy.attack("another target");

    FragTrap fragTrapAssigned;
    fragTrapAssigned = fragTrap;
    fragTrapAssigned.attack("yet another target");

    return 0;
}