#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &) {}
Intern &Intern::operator=(const Intern &) { return *this; }
Intern::~Intern() {}

AForm *Intern::createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    const std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"};
    AFormCreator creators[] = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential};

    for (int i = 0; i < 3; ++i)
    {
        if (formNames[i] == toLowerCase(formName))
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }

    std::cerr << "Error: Form '" << formName << "' does not exist." << std::endl;
    return NULL;
}

std::string Intern::toLowerCase(const std::string &input)
{
    std::string result = input;
    for (std::string::size_type i = 0; i < result.length(); ++i)
    {
        result[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(result[i])));
    }
    return result;
}
