#ifndef PPF
#define PPF

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    const std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm &src);

    const std::string	getTarget(void) const;
    void		        beExecuted() const;
};

#endif