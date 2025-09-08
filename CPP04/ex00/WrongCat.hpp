/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:55 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 17:26:56 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    //construct & destruct
    WrongCat();
    ~WrongCat();
    //copy construct
    WrongCat(const WrongCat& other);
    //operator assign
    WrongCat& operator=(const WrongCat& other);
    //get set
    std::string getType() const;
    void setType(std::string type);
    //members
    void makeSound()const;
};

#endif