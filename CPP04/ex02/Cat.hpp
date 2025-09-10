/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:24 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 19:03:00 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
    //con & de    
        Cat();
        ~Cat();
    //copy con
        Cat(const Cat& other);
    //assign operator
        Cat& operator=(const Cat& other);
    //override member
        virtual void makeSound() const;
    //members
        void setBrainIdea(int index, const std::string &idea);
        void displayBrainIdea(int index) const;
};

#endif