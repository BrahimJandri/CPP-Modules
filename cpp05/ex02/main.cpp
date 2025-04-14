#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat high("HighGrade", 1);
        Bureaucrat mid("MidGrade", 50);
        Bureaucrat low("LowGrade", 150);

        std::cout << "\n--- Creating Forms ---\n";
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Marvin");
        PresidentialPardonForm pardon("Ford");

        std::cout << "\n--- Trying to Execute Unsigned Forms ---\n";
        try
        {
            high.executeForm(shrub);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "\n--- Signing Forms with Sufficient Grade ---\n";
        high.signForm(shrub);
        high.signForm(robo);
        high.signForm(pardon);

        std::cout << "\n--- Executing All Forms with High Grade ---\n";
        high.executeForm(shrub);
        high.executeForm(robo);
        high.executeForm(pardon);

        std::cout << "\n--- Executing with Mid Grade ---\n";
        try
        {
            mid.executeForm(robo);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        try
        {
            mid.executeForm(pardon);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "\n--- Executing with Low Grade ---\n";
        try
        {
            low.executeForm(shrub);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception in main: " << e.what() << std::endl;
    }

    return 0;
}
