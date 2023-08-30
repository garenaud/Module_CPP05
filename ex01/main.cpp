#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    {
        try {
            Bureaucrat bureaucrat("Leo", 20);
            Form       form("Zakon", 30, 40);
            bureaucrat.signForm(form);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Leo", 120);
            Form       form("Postanovlenie", 0, 40);
            std::cout << bureaucrat << std::endl;
            std::cout << form << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat1("Leo", 2);
            Bureaucrat bureaucrat2("Stue", 120);
            Form       form1("Zakon1", 30, 40);
            Form       form2("Zakon2", 30, 40);

            bureaucrat1.signForm(form1);
            bureaucrat2.signForm(form2);
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}