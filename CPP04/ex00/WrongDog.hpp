/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:27:02 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 17:27:04 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
    //construct & destruct
    WrongDog();
    ~WrongDog();
    //copy construct
    WrongDog(const WrongDog& other);
    //operator assign
    WrongDog& operator=(const WrongDog& other);
    //get set
    std::string getType() const;
    void setType(std::string type);
    //members
    void makeSound()const;
};

#endif