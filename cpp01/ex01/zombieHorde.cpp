#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new (std::nothrow) Zombie[N];
    if (!horde)
    {
        std::cerr << "Can't allocate memory for Zombie\n";
        return NULL;
    }
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return horde;
}