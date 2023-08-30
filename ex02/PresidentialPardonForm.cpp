#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("unnamed"){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src), _target(src.getTarget()){
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    if (this == &src)
        return *this;
    *this = src;
    return *this;
}

const std::string	PresidentialPardonForm::getTarget(void) const {
    return (this->_target);
}

void    PresidentialPardonForm::beExecuted() const {
    if (this->getSign() == false) {
		std::cout << this->getName() << " is not signed" << std::endl;
        return;
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}