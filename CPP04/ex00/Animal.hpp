#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
    //construct & decostruct
        Animal();
        virtual ~Animal();
    //copy construct
        Animal(const Animal& other);
    //assign operator
        Animal& operator=(const Animal& other);
    //getter setter
        std::string getType() const;
        void setType(std::string type) const;
    //members
        virtual void makeSound();
};

#endif