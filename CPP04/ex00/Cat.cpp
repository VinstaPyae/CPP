#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << type << " Born\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    type = other.type;
    std::cout << type << " copy from " << other.type << std::endl;
}

Cat::~Cat()
{
    std::cout << type << " Died!\n";
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Cat::operator=(other);
         std::cout << type << " assign from " << other.type << std::endl;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!\n";
}

std::string Cat::getType() const
{
    return type;
}

void Cat::setType(std::string type)
{
    Animal::setType(type);
}
