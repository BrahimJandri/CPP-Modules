#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(1000000000, "Zombie");
    if(!horde)
    {
        std::cout << "7ze9 lprogramm" << std::endl;
        return 1;
    }
    for (int i = 0; i <1000000000 ; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}