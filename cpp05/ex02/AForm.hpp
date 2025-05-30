#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
     const std::string _name;
     bool _signed;
     const int _gradeToSign;
     const int _gradeToExecute;

public:
     AForm(const std::string &name, int gradeToSign, int gradeToExecute);
     AForm(const AForm &other);
     AForm &operator=(const AForm &other);
     virtual ~AForm();

     const std::string &getName() const;
     bool isSigned() const;
     int getGradeToSign() const;
     int getGradeToExecute() const;

     void beSigned(const Bureaucrat &b);
     virtual void execute(const Bureaucrat &executor) const = 0;

     class GradeTooHighException : public std::exception
     {
          const char *what() const throw();
     };
     class GradeTooLowException : public std::exception
     {
          const char *what() const throw();
     };
     class FormNotSignedException : public std::exception
     {
          const char *what() const throw();
     };
};

std::ostream &operator<<(std::ostream &os, const AForm &form);
