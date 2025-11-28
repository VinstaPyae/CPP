/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:59:19 by pzaw              #+#    #+#             */
/*   Updated: 2025/11/28 18:59:20 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    for (int i = 0; i < 3; i++)
    {
        Base b;
        Base* p = b.generate();
        std::cout << "\nPointer Identify\n";
        p->identify(p);
        std::cout << "\nReference Identify\n";
        p->identify(*p);
        delete p;
    }
}