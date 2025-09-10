/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:29 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 19:02:29 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    type = "Dog";
    std::cout << type << " Born\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << type << " copy from " << other.type << std::endl;
    brain = new Brain(*other.brain);
}

Dog::~Dog()
{
    delete brain;
    std::cout << type << " Died!\n";
}

Dog& Dog::operator=(const Dog& other)
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

void Dog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}

void Dog::setBrainIdea(int index, const std::string& idea)
{
    brain->setIdea(index, idea);
}

void Dog::displayBrainIdea(int index) const
{
    std::cout << "Dog's idea " << brain->getIdea(index) << std::endl;
}
