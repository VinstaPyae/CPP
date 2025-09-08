/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:48 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 17:26:49 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
    std::string type;
    
    public:
    //construct & destruct
    WrongAnimal();
    ~WrongAnimal();
    //copy construct
    WrongAnimal(const WrongAnimal& other);
    //operator
    WrongAnimal& operator=(const WrongAnimal& other);
    //getter & setter
    std::string getType() const;
    void setType(std::string type);
    //members
    void makeSound()const;
};

#endif