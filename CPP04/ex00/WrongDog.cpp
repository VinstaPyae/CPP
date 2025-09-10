/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:59 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:55:01 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    type = "WrongDog";
    std::cout << "WrongDog Born!\n";
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog Died!\n";
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other)
{
    std::cout << "WrongDog Copied!\n";
}

WrongDog& WrongDog::operator=(const WrongDog& other)
{
    std::cout << "WrongDog assign " << type << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongDog::makeSound() const
{
    std::cout << "Woof Woof!\n";
}
