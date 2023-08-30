#include "Form.hpp"

Form::Form() : _name("unnamed") , _isSigned(false), _gradeSign(150), _gradeExe(150) {
    std::cout << "Defaut constructor called" << std::endl;
}

Form::Form(std::string const name, int const sign, int const exe) : _name(name) , _isSigned(false), _gradeSign(sign), _gradeExe(exe) {
    std::cout << "Constructor called" << std::endl;
    if (sign < 1 || exe < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || exe > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src.getName()) , _isSigned(src.getSign()), _gradeSign(src.getGradeSign()), _gradeExe(src.getGradeExe()){
    std::cout << "Copy constructor called" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor called" << std::endl;
}

Form& Form::operator=(const Form &src){
    if (this == &src)
        return (*this);
    this->_isSigned = src.getSign();
    return (*this);
}

std::string Form::getName(void) const {
    return (this->_name);
}

bool    Form::getSign(void) const {
    return (this->_isSigned);
}

int Form::getGradeExe(void) const {
    return (this->_gradeExe);
}

int Form::getGradeSign(void) const {
    return (this->_gradeSign);
}

void    Form::beSigned(Bureaucrat const &bureaucrat) {
    if (!_isSigned) {
        if (bureaucrat.getGrade() <= this->_gradeSign)
            this->_isSigned = true;
        else
            throw Form::GradeTooLowException();
    }
    else
        std::cout << this->_name << " is already signed" << std::endl;
}

const char  *Form::GradeTooHighException::what() const throw() {
    return("Grade too high");
}

const char  *Form::GradeTooLowException::what() const throw() {
    return("Grade too low");
}

std::ostream& operator << (std::ostream& o, Form const &src) {
    o << src.getName() << " isSigned = " << src.getSign();
    return (o);
}