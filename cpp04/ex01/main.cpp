#include "./headers/Animal.hpp"
#include "./headers/Dog.hpp"
#include "./headers/Cat.hpp"

#define arraySize 10

int main()
{
    std::cout << "===========ANIMAL BASIC TEST=======" << std::endl;
    Animal *animals[arraySize];
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
    }
    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }
    std::cout << "===========DOG SET IDEA BRAIN=======" << std::endl;
    Dog dog;
    Dog dog2;
    dog2 = dog;
    dog.getBrain()->setIdea("I am a dog", 0);
    dog2.getBrain()->setIdea("I am a dog2", 0);
    std::cout << dog.getBrain()->getIdea(0) << std::endl;
    std::cout << dog2.getBrain()->getIdea(0) << std::endl;
    std::cout << "===========CAT SET IDEA BRAIN=======" << std::endl;
    Cat cat;
    Cat cat2(cat);
    cat.getBrain()->setIdea("I am a cat", 0);
    cat2.getBrain()->setIdea("I am a cat2", 0);
    std::cout << cat.getBrain()->getIdea(0) << std::endl;
    std::cout << cat2.getBrain()->getIdea(0) << std::endl;
    std::cout << "===========DESTRUCTOR=======" << std::endl;

    return 0;
}