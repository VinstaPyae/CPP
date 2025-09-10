/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:23:36 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/08 18:28:58 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
    // de & construct
        Brain();
        ~Brain();
    //copy construct
        Brain(const Brain& other);
    //assign operator
        Brain& operator=(const Brain& other);
    //get set
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string& idea);
    };

#endif