#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _gradeSigne;
    const int _gradeExec;
public:
    Form();
    ~Form();
    beSigned(Bureaucrat &Bureaucrat)

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    int getGradeSigne();
    int getGradeExec();
    const std::string &getName() const;
    bool getBoolSign();

};

std::ostream &operator<<(std::ostream &out, const Form &b);


#endif