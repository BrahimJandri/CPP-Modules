#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Bureaucrat; // Forward declaration to avoid circular dependency

class Form {
private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    // Constructors and Destructor
    Form();
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form& other);
    ~Form();

    // Assignment operator
    Form& operator=(const Form& other);

    // Getters
    std::string getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Member functions
    void beSigned(const Bureaucrat& bureaucrat);

    // Exception classes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif