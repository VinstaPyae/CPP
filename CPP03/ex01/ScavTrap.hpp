/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:45:49 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/05 15:45:50 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //construct and destruct
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        //copy construct
        ScavTrap(const ScavTrap& other);
        //assign operator
        ScavTrap& operator=(const ScavTrap& other);
        //members
        void guardGate();
        //override
        void attack(const std::string& target);
};

#endif