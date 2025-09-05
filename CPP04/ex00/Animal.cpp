#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "God created " << type << std::endl;
}

Animal::Animal(const Animal& other)
{
    type = other.type;
    std::cout << "God copy " << other.type << " to " << type << std::endl;
}

Animal::~Animal()
{
    std::cout << "God destroyed " << type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
    {
        type = other.type;
    }
    std::cout << "God assign " << other.type << " to " << type << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

void 
