/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:14:39 by pzaw              #+#    #+#             */
/*   Updated: 2025/11/28 12:14:40 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Usage: ./convert <literal>" << std::endl;
}
