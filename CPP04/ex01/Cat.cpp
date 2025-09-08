/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:21 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 19:22:25 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    type = "Cat";
    std::cout << type << " Born\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << type << " copy from " << other.type << std::endl;
    brain = new Brain(*other.brain);
}

Cat::~Cat()
{
    delete brain;
    std::cout << type << " Died!\n";
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << type << " assign from " << other.type << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
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

void Cat::setBrainIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

void Cat::displayBrainIdea(int index) const
{
    std::cout << "Cat's idea " << brain->getIdea(index) << std::endl;    
}
