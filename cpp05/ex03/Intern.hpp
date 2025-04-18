#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cctype>

class Intern
{
public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();

    AForm* makeForm(const std::string &formName, const std::string &target);

private:
    // Function pointer type for form creation
    typedef AForm *(*FormCreator)(const std::string &);

    // Struct to hold form name and creator function
    struct FormEntry
    {
        const char *name;
        FormCreator creator;
    };

    // Static helper functions to create specific forms
    static AForm *createShrubberyCreationForm(const std::string &target);
    static AForm *createRobotomyRequestForm(const std::string &target);
    static AForm *createPresidentialPardonForm(const std::string &target);

};

#endif