#ifndef BUREACURAT_HPP
# define BUREACURAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        // Orthodox
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();
        //getters
        const std::string& getName() const;
        int getGrade() const;
        //exceptions
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        //members
        void    incrementGrade();
        void    decrementGrade();
        void signForm(AForm &form) const;
        void executeForm(const AForm &form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif