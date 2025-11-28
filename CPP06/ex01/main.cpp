/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:15:07 by pzaw              #+#    #+#             */
/*   Updated: 2025/11/28 13:14:12 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data d;
    d.name = "hehe";
    d.number = 55;
    uintptr_t raw = Serialization::serialize(&d);
    Data* ptr = Serialization::deserialize(raw);
    std::cout << "Before Serialization\n";
    std::cout << "Data: " << &d << "\nname & num : "<< d.name << d.number << std::endl;
    std::cout << "-------------\n" << "Serialization\n";
    std::cout << "Uinptr: " << raw;
    std::cout << "\n-------------\n" << "Deserialization\n";
    std::cout << "Data_ptr: " << ptr << "\nname & num : "<< ptr->name << ptr->number << std::endl;
}
