#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    std::cout << "WrongDog Born!\n";
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog Died!\n";
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other)
{
    type = other.type;
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        std::cout << "WrongDog assign " << type << std::endl;
    }
    return *this;
}

std::string WrongDog::getType() const
{
    return type;
}

void WrongDog::setType(std::string type)
{
    this->type = type;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}
