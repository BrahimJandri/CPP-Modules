#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        _isSigned = other._isSigned;
    }
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

bool Form::isSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _isSigned = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}
std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form Name: " << form.getName() << std::endl;
    out << "Signed: " << (form.isSigned() ? "Yes" : "No") << std::endl;
    out << "Grade Required to Sign: " << form.getGradeToSign() << std::endl;
    out << "Grade Required to Execute: " << form.getGradeToExecute() << std::endl;
    return out;
}
