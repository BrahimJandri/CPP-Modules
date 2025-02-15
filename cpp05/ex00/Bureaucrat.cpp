#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(), _grade(1)
{
    std::cout << "Default Constractor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
    if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = other._grade;
    std::cout << "Copy Constractor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Destractor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
}

const std::string &Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    _grade--;
    if (_grade < 1)
    {
        throw GradeTooHighException();
    }
    if (_grade > 150)
    {
        throw GradeTooLowException();
    }
}

void Bureaucrat::decrementGrade()
{
    _grade++;
    if (_grade < 1)
    {
        throw GradeTooHighException();
    }
    if (_grade > 150)
    {
        throw GradeTooLowException();
    }
}
