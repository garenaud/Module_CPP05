#ifndef RRF_H
#define RRF_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm &src);

        const std::string	getTarget(void) const;
        void		        beExecuted() const;

};

#endif