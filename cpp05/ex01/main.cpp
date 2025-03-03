#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat forma("brahim", 10, 12);
        Form bihi();
        std::cout << bihi << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
    
}
