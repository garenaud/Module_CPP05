#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed") {
    std::cout << "Default constructor called" << std::endl;
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    std::cout << "Constructor called" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if(grade > 150)
        throw  Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
        this->_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src) {
    if(this == &src)
       return (*this);
    this->_grade = src.getGrade();
    return (*this);
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

void Bureaucrat::mmGrade () {
    if (this->_grade  == 1)
        throw Bureaucrat::GradeTooLowException();
    this->_grade--;
};

void Bureaucrat::ppGrade () {
    if (this->_grade  == 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade++;
};

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}