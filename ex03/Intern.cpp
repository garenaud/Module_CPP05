#include "Intern.hpp"

Intern::Intern() {

}
Intern::Intern(Intern const &src) {
    *this = src;
}

Intern::~Intern() {

}

Intern& Intern::operator=(Intern const &src) {
    if (this == &src)
        return (*this);
    *this = src;
    return (*this);
}

Form* Intern::createSCF(std::string name) {
    return (new ShrubberyCreationForm(name));
}

Form* Intern::createRRF(std::string name) {
    return (new RobotomyRequestForm(name));
}

Form* Intern::createPPF(std::string name) {
    return (new PresidentialPardonForm(name));
}

Form* Intern::makeForm(std::string formName, std::string target) {
    std::string arr[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *(Intern::*formArr[3])(std::string name) = {Intern::createRRF, Intern::createPPF, Intern::createSCF};
    int i = -1;

    while (++i < 3 ) {
        if (arr[i] == formName)
            return (this->*formArr[i])(target);
    }
    throw WrongFormName();
}

const char * Intern::WrongFormName::what() const throw() {
    return ("Wrong form name");
}