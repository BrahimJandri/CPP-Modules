#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Aform.hpp"

class ShrubberyCreationForm : public Form
{
private:
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(Form &form);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
};

#endif