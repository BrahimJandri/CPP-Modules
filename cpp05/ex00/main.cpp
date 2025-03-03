#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("brahim", 150);
        std::cout << obj << std::endl;
        Bureaucrat obj2;
        obj2 = obj;
        obj2.incrementGrade();
        std::cout << obj2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
