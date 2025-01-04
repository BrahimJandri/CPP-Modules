#include "ClapTrap.hpp"

int main() {
    // Create ClapTrap objects
    ClapTrap clap1("Clappy");
    ClapTrap clap2("Trapster");
    ClapTrap clap3;

    // Test attacks
    clap1.attack("Trapster");
    clap2.takeDamage(5);

    // Test repairs
    clap2.beRepaired(3);

    // Exhaust energy
    for (int i = 0; i < 12; ++i) {
        clap1.attack("Trapster");
    }

    return 0;
}
