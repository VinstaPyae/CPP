#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotmyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
    //constructs
        RobotmyRequestForm();
        RobotmyRequestForm(const std::string& target);
        RobotmyRequestForm(const RobotmyRequestForm& other);
        ~RobotmyRequestForm();
    //getter
        const std::string& getTarget() const;
    //override
        void execute(const Bureaucrat& executor) const override;
};

#endif