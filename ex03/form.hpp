#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _gradeSign;
        int const _gradeExe;

    public:
        Form();
        Form(std::string const name_val, int const sign, int const exe);
        Form(Form const &src);
        virtual ~Form();
        Form&         operator=(const Form &src);

        std::string getName(void) const;
        bool        getSign(void) const;
        int         getGradeExe(void) const;
        int         getGradeSign(void) const;

        virtual void    beSigned(Bureaucrat const &bureaucrat);
        virtual void	beExecuted() const = 0;
        void            execute(Bureaucrat const &executor) const;

        class GradeTooHighException : public std::exception
        {
        public:
            virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
        public:
            virtual const char * what() const throw();
        };
};

std::ostream& operator << (std::ostream& out, Form const &obj);

#endif