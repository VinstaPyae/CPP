/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:45:07 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/05 15:45:08 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
    : _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
    std::cout << "ClapTrap " << _Name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
    std::cout << "ClapTrap " << _Name << " created." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _Name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    _Name = other._Name;
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    std::cout << "ClapTrap " << _Name << " copied." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if(_HitPoints > 0 && _EnergyPoints > 0) {
        --_EnergyPoints;
        std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! | Current energy points: " << _EnergyPoints << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _Name << " cannot attack, either out of hit points or energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_HitPoints > amount) {
        _HitPoints -= amount;
        std::cout << "ClapTrap " << _Name << " takes " << amount << " points of damage! Remaining hit points: " << _HitPoints << std::endl;
    } else {
        _HitPoints = 0;
        std::cout << "ClapTrap " << _Name << " has been destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_HitPoints > 0 && _EnergyPoints > 0) {
        --_EnergyPoints;
        _HitPoints += amount;
        std::cout << "ClapTrap " << _Name << " repairs itself for " << amount << " hit points! Current hit points: " << _HitPoints << " | Current energy points: " << _EnergyPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _Name << " cannot be repaired, either out of hit points or energy!" << std::endl;
    }
}
