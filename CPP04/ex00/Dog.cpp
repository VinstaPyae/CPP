/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:29 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:35:49 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << type << " Born\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << type << " copy from " << other.type << std::endl;
}

Dog::~Dog()
{
    std::cout << type << " Died!\n";
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << type << " assign from " << other.type << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}
