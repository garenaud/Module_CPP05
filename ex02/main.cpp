#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    {
        try {
            Bureaucrat bureaucrat("Leo", 20);
            RobotomyRequestForm   form("test");
            bureaucrat.signForm(form);
            bureaucrat.executeForm(form);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Leo", 20);
            ShrubberyCreationForm   form("tree");
            bureaucrat.signForm(form);
            bureaucrat.executeForm(form);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Leo", 20);
            PresidentialPardonForm   form("hmm");
            bureaucrat.signForm(form);
            bureaucrat.executeForm(form);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Don", 1);
            PresidentialPardonForm   form("Omar");
            bureaucrat.signForm(form);
            bureaucrat.executeForm(form);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}