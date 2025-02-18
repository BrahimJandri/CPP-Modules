#include "Form.hpp"

Form::Form() : _signed(false), _name(""), _gradeExec(10), _gradeSigne(10)
{
    std::cout << "Default Constructer Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default Destructer Called" << std::endl;
}
