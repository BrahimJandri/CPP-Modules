#include "Zombie.hpp"

int main()
{
    Zombie *Foo = newZombie("Foo");
    Foo->announce();
    randomChump("Foo2");
    delete Foo;
    return 0;
}