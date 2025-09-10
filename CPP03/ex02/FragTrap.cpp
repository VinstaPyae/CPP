/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:45:59 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/05 15:46:00 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created!\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created!\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    _Name = other._Name;
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _HitPoints = other._HitPoints;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _Name << " destroyed!\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _Name << " said high_fives broski!\n";
}
