#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("unnamed"){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), _target(src.getTarget()){
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    if (this == &src)
        return *this;
    *this = src;
    return *this;
}

const std::string	RobotomyRequestForm::getTarget(void) const {
    return (this->_target);
}

void    RobotomyRequestForm::beExecuted() const {
    if (this->getSign() == false) {
		std::cout << this->getName() << " is not signed" << std::endl;
        return;
    }
    std::cout << "WZHZHZHZHWZHZHZHWZHZHZH" << std::endl;
	if (std::rand() % 2)
		std::cout << "Congratulations, " << this->_target << "! You successfully transformed into cyborg! Beware of lightning." << std::endl;
	else
		std::cout << "Congratulations, " << this->_target << "! You have successfully remained yourself! Beware of lightning." << std::endl;

}