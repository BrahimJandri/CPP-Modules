#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    std::string const &name;

    std::string getName();
    int getGrade(int &garde);
};

#endif