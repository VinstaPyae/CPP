/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:23:32 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 18:30:45 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain developed!\n";
}

Brain::~Brain()
{
    std::cout << "Brain rotted!\n";
}

Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Copied Brain!\n";
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Assign Brain!\n";
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
    {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}
