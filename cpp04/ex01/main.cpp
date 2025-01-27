#include "./headers/Animal.hpp"
#include "./headers/Dog.hpp"
#include "./headers/Cat.hpp"

#define arraySize 10

int main()
{
    Animal *animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
    }

    std::cout << "===========MAKESOUND=======" << std::endl;

    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->makeSound();
    }

    std::cout << "===========DESTRUCTOR=======" << std::endl;

    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }

    std::cout << "===========DOG=======" << std::endl;

    Dog dog;
    dog.getBrain()->setIdea("I am a dog", 0);
    std::cout << dog.getBrain()->getIdea(0) << std::endl;

    std::cout << "===========CAT=======" << std::endl;

    Cat cat;
    cat.getBrain()->setIdea("I am a cat", 0);
    std::cout << cat.getBrain()->getIdea(0) << std::endl;
    Dog j(dog);
    j.getBrain()->setIdea("I am a j dog", 0);
    std::cout << j.getBrain()->getIdea(0) << std::endl;
    std::cout << "===========DESTRUCTOR=======" << std::endl;

    return 0;
}