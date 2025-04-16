#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Alice("Alice", 1);
        Alice.incrementGrade();
        std::cout << Alice << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat John("John", 150);
        John.decrementGrade();
        std::cout << John << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
