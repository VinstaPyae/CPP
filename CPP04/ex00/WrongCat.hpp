/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:55 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:36:19 by pzaw             ###   ########.fr       */
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
    //members
    void makeSound()const;
};

#endif