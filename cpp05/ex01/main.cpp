#include "Form.hpp"

int main()
{
    Bureaucrat bob("Bob", 50);
    Bureaucrat alice("Alice", 20);
    Bureaucrat charlie("Charlie", 1);

    Form formA("FormA", 30, 20);
    Form formB("FormB", 15, 10);
    Form formC("FormC", 1, 1);

    std::cout << "Testing Form Signing..." << std::endl;
    std::cout << formA << std::endl;
    try
    {
        bob.signForm(formA);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        alice.signForm(formA);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << formB << std::endl;
    try
    {
        bob.signForm(formB);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        alice.signForm(formB);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << formC << std::endl;
    try
    {
        charlie.signForm(formC);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
