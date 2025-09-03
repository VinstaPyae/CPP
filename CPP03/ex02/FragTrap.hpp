#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //construct and destruct
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        //copy construct
        FragTrap(const FragTrap& other);
        //assign operator
        FragTrap& operator=(const FragTrap& other);
        //members
        void highFivesGuys(void);
};

#endif