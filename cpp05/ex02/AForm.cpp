#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other)
    : _name(other._name), _signed(other._signed),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}
AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        _signed = other._signed;
    }
    return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::isSigned() const
{
    return _signed;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &aform)
{
    os << "Form: " << aform.getName()
       << ", signed: " << (aform.isSigned() ? "yes" : "no")
       << ", grade to sign: " << aform.getGradeToSign()
       << ", grade to execute: " << aform.getGradeToExecute();
    return os;
}