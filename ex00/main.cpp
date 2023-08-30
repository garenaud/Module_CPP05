#include "Bureaucrat.hpp"

int main() {
    {
        try {
            Bureaucrat bureaucrat("Leo", 140);
            std::cout << bureaucrat << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Leo", 170);
            std::cout << bureaucrat << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Leo", 2);
            std::cout << bureaucrat << std::endl;
            bureaucrat.mmGrade();
            std::cout << bureaucrat << std::endl;
            bureaucrat.mmGrade();
            std::cout << bureaucrat << std::endl;
        }
        catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}