/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:52 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:55:33 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat Born!\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Died!\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copied!\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assign " << type << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow!\n";
}
