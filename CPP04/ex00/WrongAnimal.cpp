#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "God create " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "God destroyed " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "God copy it \n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
        std::cout << "God assign it \n";
    }
    return *this;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "God make sound for " << type << std::endl;
}
