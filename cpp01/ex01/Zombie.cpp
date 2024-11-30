#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is created" << std::endl;
    return;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": is destroyed" << std::endl;
    return;
}
