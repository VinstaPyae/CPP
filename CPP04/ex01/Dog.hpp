/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:33 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 19:10:15 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
    //con & de    
        Dog();
        ~Dog();
    //copy con
        Dog(const Dog& other);
    //assign operator
        Dog& operator=(const Dog& other);
    //override getter setter
        std::string getType() const;
        void setType(std::string type);
    //override member
        virtual void makeSound() const;
    //member
        void setBrainIdea(int index, const std::string& idea);
        void displayBrainIdea(int index) const;
};

#endif