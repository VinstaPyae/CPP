/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:12 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 18:21:34 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "God assign " << other.type << " to " << type << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "God make anmal sound\n";
}
