#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("John", 150);
        std::cout << obj << std::endl;
        std::cout << "------------------------" << std::endl;
        obj.incrementGrade();
        std::cout << obj << std::endl;
        std::cout << "------------------------" << std::endl;
        Bureaucrat obj2;
        obj2 = obj;
        obj2.decrementGrade();
        std::cout << obj2 << std::endl;
        std::cout << "------------------------" << std::endl;
        Bureaucrat obj3(obj2);
        std::cout << obj3 << std::endl;
        obj3.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
