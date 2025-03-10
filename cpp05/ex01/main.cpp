#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat forma("brahim", 10);
        Form bihi("bihi", 10, 10);
        bihi.beSigned(forma);
        std::cout << bihi << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
    
}
