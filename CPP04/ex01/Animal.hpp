/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:17 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 17:26:18 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
    //construct & decostruct
        Animal();
        virtual ~Animal();
    //copy construct
        Animal(const Animal& other);
    //assign operator
        Animal& operator=(const Animal& other);
    //getter setter
        std::string getType() const;
        void setType(std::string type);
    //members
        virtual void makeSound() const;
};

#endif