#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Born!\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Died!\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        std::cout << "WrongCat assign " << type << std::endl;
    }
    return *this;
}

std::string WrongCat::getType() const
{
    return type;
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow!\n";
}
