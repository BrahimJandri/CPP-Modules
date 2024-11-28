#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    return;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": is destroyed" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}