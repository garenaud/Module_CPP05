#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("unnamed"){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), _target(src.getTarget()){
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    if (this == &src)
        return *this;
    *this = src;
    return *this;
}

const std::string	ShrubberyCreationForm::getTarget(void) const {
    return (this->_target);
}

void    ShrubberyCreationForm::beExecuted() const {
    std::ofstream	file(this->_target + "_shrubbery");

	if (this->getSign() == false) {
		std::cout << this->getName() << " is not signed" << std::endl;
        return;
    }
    file << "      ." << std::endl;
    file << "   __/ \\__" << std::endl;
    file << "   \\     /" << std::endl;
    file << "   /.'o'.\\ " << std::endl;
    file << "    .o.'." << std::endl;
    file << "   .'.'o'." << std::endl;
    file << "  o'.o.'.o." << std::endl;
    file << " .'.o.'.'.o." << std::endl;
    file << ".o.'.o.'.o.'." << std::endl;
    file << "   [_____]" << std::endl;
    file << "    \\___/  "   << std::endl;
    file.close();
    std::cout << "Tree created" << std::endl;
}