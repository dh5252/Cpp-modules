
#include "includes/Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "high grade exception";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "low grade exception";
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
    this->grade = obj.grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->grade = grade;
    if (grade < 1) {
        throw GradeTooHighException();
    }
    else if (grade > 150) {
        throw GradeTooLowException();
    }
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade(unsigned int abs)
{
    if (grade - (int)abs < 1)
        throw GradeTooHighException();
    grade -= abs;
}

void Bureaucrat::decrementGrade(unsigned int abs)
{
    if (grade + (int)abs > 150)
        throw GradeTooLowException();
    grade += abs;
}