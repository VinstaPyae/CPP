#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
    std::string type;
    
    public:
    //construct & destruct
    WrongAnimal();
    ~WrongAnimal();
    //copy construct
    WrongAnimal(const WrongAnimal& other);
    //operator
    WrongAnimal& operator=(const WrongAnimal& other);
    //getter & setter
    std::string getType() const;
    void setType(std::string type);
    //members
    void makeSound()const;
};

#endif