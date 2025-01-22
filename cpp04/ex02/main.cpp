#include "./headers/Animal.hpp"
#include "./headers/Dog.hpp"
#include "./headers/Cat.hpp"

int main()
{
    std::cout << "===========Default Constructor=======" << std::endl;
    
    AAnimal *myDog = new Dog();
    AAnimal *myCat = new Cat();

    std::cout << "===========Sound=======" << std::endl;

    myDog->makeSound(); // Outputs: Woof!
    myCat->makeSound(); // Outputs: Meow!

    std::cout << "===========Default Destructor=======" << std::endl;

    delete myDog;
    delete myCat;

    return 0;
}