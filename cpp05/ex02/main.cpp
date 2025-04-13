#include "Aform.hpp"

int main()
{
    try
    {
        Bureaucrat Bob("Bob", 10);
        std::cout << Bob << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
    
}
