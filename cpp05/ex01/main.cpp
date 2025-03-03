#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat obj("brahim", 150);
        std::cout << obj << std::endl;
        Bureaucrat kra;
        kra = obj;
        kra.incrementGrade();
        std::cout << kra << std::endl;
        Bureaucrat obj2(obj);
        std::cout << obj2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
    
}
