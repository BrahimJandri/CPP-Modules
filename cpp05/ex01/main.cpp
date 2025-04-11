#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat forma("brahim", 50);
        Form bihi("bihi", 50, 10);
        bihi.beSigned(forma);
        std::cout << bihi << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
    
}
