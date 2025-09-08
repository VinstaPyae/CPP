/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:44 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 18:19:55 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "God assign it \n";
    if (this != &other)
    {
        this->type = other.type;
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
