/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:24 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 17:26:25 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    //con & de    
        Cat();
        ~Cat();
    //copy con
        Cat(const Cat& other);
    //assign operator
        Cat& operator=(const Cat& other);
    //override getter setter
        std::string getType() const;
        void setType(std::string type);
    //override member
        virtual void makeSound() const;
};

#endif