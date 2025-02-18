#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>


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
};

#endif