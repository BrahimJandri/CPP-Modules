#include "Aform.hpp"

Aform::Aform() : _name("Default Aform"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Aform::Aform(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Aform::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Aform::GradeTooLowException();
}

Aform::Aform(const Aform &other)
    : _name(other._name), _signed(other._signed),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Aform::~Aform()
{
}

Aform &Aform::operator=(const Aform &other)
{
    if (this != &other)
    {
        _signed = other._signed;
    }
    return *this;
}

std::string Aform::getName() const
{
    return _name;
}

bool Aform::isSigned() const
{
    return _signed;
}

int Aform::getGradeToSign() const
{
    return _gradeToSign;
}

int Aform::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Aform::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw Aform::GradeTooLowException();
}

const char *Aform::GradeTooHighException::what() const throw()
{
    return "Form grade is too high";
}

const char *Aform::GradeTooLowException::what() const throw()
{
    return "Form grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Aform &aform)
{
    os << "Form: " << aform.getName()
       << ", signed: " << (aform.isSigned() ? "yes" : "no")
       << ", grade to sign: " << aform.getGradeToSign()
       << ", grade to execute: " << aform.getGradeToExecute();
    return os;
}