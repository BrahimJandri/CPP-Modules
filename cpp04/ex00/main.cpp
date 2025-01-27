#include "./headers/Animal.hpp"
#include "./headers/Cat.hpp"
#include "./headers/Dog.hpp"
#include "./headers/WrongAnimal.hpp"
#include "./headers/WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    const WrongAnimal *meta2 = new WrongAnimal();
    const WrongAnimal *j2 = new WrongCat();
    
    std::cout << std::endl;

    std::cout << j2->getType() << " " << std::endl;

    std::cout << std::endl;

    j2->makeSound();

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete meta2;
    delete j2;

    return 0;
}