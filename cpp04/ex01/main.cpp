#include "./headers/Animal.hpp"
#include "./headers/Cat.hpp"
#include "./headers/Dog.hpp"
#include "./headers/WrongAnimal.hpp"
#include "./headers/WrongCat.hpp"
#include "./headers/Brain.hpp"

#define MAX_ANIMALS 101

int main()
{
    Animal* animals[MAX_ANIMALS];
    
    for (int i = 0; i < MAX_ANIMALS / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = MAX_ANIMALS / 2; i < MAX_ANIMALS; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < MAX_ANIMALS; i++) {
        delete animals[i];
    }
    std::cout << "<=======================================>" << std::endl;
    std::cout << std::endl;
    
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    
    std::cout << std::endl;

    delete i;
    delete j;

    return 0;
}