#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern& operator=(Intern const &src);

        Form* createSCF(std::string name);
        Form* createRRF(std::string name);
        Form* createPPF(std::string name);
        Form* makeForm(std::string formName, std::string target);

        class WrongFormName : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

#endif