#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    //con & de    
        Cat();
        ~Cat();
    //copy con
        Cat(const Cat& other);
    //assign operator
        Cat& operator=(const Cat& other);
    //override getter setter
        virtual std::string getType() const;
        virtual void setType(std::string type);
    //override member
        virtual void makeSound() const;
};

#endif