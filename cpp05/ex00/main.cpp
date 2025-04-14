#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Default;
    std::cout << Default << std::endl;

    Bureaucrat Alice("Alice", 1);
    Alice.decrementGrade();
    std::cout << Alice << std::endl;
    try
    {
        Alice.incrementGrade();
        std::cout << Alice << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    Bureaucrat John("John", 150);
    John.incrementGrade();
    std::cout << John << std::endl;
    try
    {
        John.decrementGrade();
        std::cout << John << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
