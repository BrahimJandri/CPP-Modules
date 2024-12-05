#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(1, "Zombie");
    if (!horde)
    {
        return 1;
    }
    for (int i = 0; i < 1000000000; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}