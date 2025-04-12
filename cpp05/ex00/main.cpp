#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat John("John", 150);
    Bureaucrat Alice;
    Bureaucrat Bob(Alice);

    try
    {
        std::cout << John << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        John.decrementGrade();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        John.incrementGrade();
        std::cout << John << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Alice = John;
        Alice.decrementGrade();
        std::cout << Alice << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << Bob << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
