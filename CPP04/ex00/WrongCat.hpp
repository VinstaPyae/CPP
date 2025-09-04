#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    //construct & destruct
    WrongCat();
    ~WrongCat();
    //copy construct
    WrongCat(const WrongCat& other);
    //operator assign
    WrongCat& operator=(const WrongCat& other);
    //get set
    std::string getType() const;
    void setType(std::string type);
    //members
    void makeSound()const;
};

#endif