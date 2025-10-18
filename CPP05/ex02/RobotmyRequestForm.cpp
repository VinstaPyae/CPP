#include "RobotmyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotmyRequestForm::RobotmyRequestForm() : AForm("RobotmyRequestForm", 72, 45), _target("default")
{
    std::cout << "Default RobotmyRequestForm\n";
}

RobotmyRequestForm::RobotmyRequestForm(const std::string& target) 
    : AForm("RobotmyRequestForm", 72, 45), _target(target)
{
    std::cout << _target << " RobotmyRequestForm created\n";
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm& other)
    : AForm(other), _target(other._target)
{
    std::cout << _target << " copied RobotmyRequestForm\n";
}

RobotmyRequestForm& RobotmyRequestForm::operator=(const RobotmyRequestForm& other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << _target << " assigned RobotmyRequestForm\n";
    return *this;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
    std::cout << _target << " destroy RobotmyRequestForm\n";
}

const std::string &RobotmyRequestForm::getTarget() const
{
    return _target;
}

void RobotmyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!getIsSigned())
        throw std::runtime_error("Form not signed!");
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(std::time(nullptr));
        seeded = true;
    }
    std::cout << "*Drilling noises* Bzzzzz..." << std::endl;
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << _target << "!" << std::endl;
}