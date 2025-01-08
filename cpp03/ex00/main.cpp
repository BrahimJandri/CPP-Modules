#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap1("Flan");

    claptrap1.attack("Fltrlan");
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(3);

    ClapTrap claptrap2("Flana");
    claptrap2.attack("Fltrlana");
    claptrap2.takeDamage(10);
    claptrap2.beRepaired(10);

    return 0;
}
