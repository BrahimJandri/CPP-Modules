#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* Foo = newZombie("Foo");
    Foo->announce();
    randomChump("Foo2");
    delete Foo;
    return 0;
}