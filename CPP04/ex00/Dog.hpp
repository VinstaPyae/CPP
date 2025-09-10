/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:33 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:35:45 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    //con & de    
        Dog();
        ~Dog();
    //copy con
        Dog(const Dog& other);
    //assign operator
        Dog& operator=(const Dog& other);
    //override member
        virtual void makeSound() const;
};

#endif