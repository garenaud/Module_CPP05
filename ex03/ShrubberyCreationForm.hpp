#ifndef SCF_H
#define SCF_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm&  operator=(const ShrubberyCreationForm &src);

        const std::string	getTarget(void) const;
        void		beExecuted() const;

    private:
        const std::string	_target;
};


#endif