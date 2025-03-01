#include "Form.hpp"

Form::Form() : _signed(false), _name(""), _gradeExec(10), _gradeSigne(10)
{
    std::cout << "Default Constructer Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Default Destructer Called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

std::ostream &operator<<(std::ostream &out, const Form &b)
{
    return out;
}

int Form::getGradeSigne()
{
    return _gradeSigne;
}

int Form::getGradeExec()
{
    return _gradeExec;
}