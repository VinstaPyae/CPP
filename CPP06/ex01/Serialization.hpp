/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:59:46 by pzaw              #+#    #+#             */
/*   Updated: 2025/11/28 18:59:47 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
    int number;
    std::string name;
};

class Serialization
{
    private:
        Serialization();
        Serialization(const Serialization& other);
        Serialization& operator=(const Serialization& other);
        ~Serialization();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif