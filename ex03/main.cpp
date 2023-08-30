#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    {
        try {
            Intern test;
            Form    *form = new PresidentialPardonForm();
            form = test.makeForm("presidential pardon", "Omar");
            Bureaucrat jill("Jill", 10);
            Bureaucrat don("Don", 1);
            jill.signForm(*form);
            jill.executeForm(*form);
            don.executeForm(*form);
            delete form;

        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Intern test;
            Form    *form = new PresidentialPardonForm();
            form = test.makeForm("robotomy", "Omar");
            Bureaucrat jill("Jill", 10);
            Bureaucrat don("Don", 1);
            jill.signForm(*form);
            jill.executeForm(*form);
            don.executeForm(*form);
            delete form;

        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}