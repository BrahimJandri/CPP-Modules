#include "./headers/Animal.hpp"
#include "./headers/Cat.hpp"
#include "./headers/Dog.hpp"
#include "./headers/WrongAnimal.hpp"
#include "./headers/WrongCat.hpp"

int main()
{
    std::cout << "-------------- The main test --------------" << std::endl;

    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    std::cout << "-------------- The Wrong test --------------" << std::endl;
    const WrongAnimal *meta2 = new WrongAnimal();
    const WrongAnimal *j2 = new WrongCat();
    std::cout << std::endl;
    std::cout << j2->getType() << " " << std::endl;
    j2->makeSound();
    std::cout << std::endl;
    delete meta2;
    delete j2;
    std::cout << std::endl;

    std::cout << "-------------- Copy Assignment Cat Test --------------" << std::endl;
    Cat cat;
    Cat cat2;
    std::cout << std::endl;
    cat2 = cat;
    std::cout << std::endl;
    cat2.makeSound();
    std::cout << std::endl;
    std::cout << "-------------- Copy Constructor Dog Test --------------" << std::endl;
    Dog dog;
    Dog dog2(dog);
    std::cout << std::endl;
    dog2.makeSound();
    std::cout << std::endl;
    return 0;
}