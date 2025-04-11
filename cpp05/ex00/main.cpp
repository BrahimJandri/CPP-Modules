#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat John("John", 150);
        std::cout << John << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Bob;
        std::cout << Bob << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
