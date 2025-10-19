#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created\n";
}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destroyed\n";
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            for (int j = 0; j < 3; j++)
            {
                if (j != i)
                    delete forms[j];
            }
            return forms[i];
        }
    }
    std::cout << "Intern cannot create form: " << formName << std::endl;
    for (int i = 0; i < 3; i++)
        delete forms[i];
    return NULL;
}
