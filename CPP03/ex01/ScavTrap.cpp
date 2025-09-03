#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created!\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created!\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    _Name = other._Name;
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    std::cout << "ScavTrap " << _Name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        _HitPoints = other._HitPoints;
        _EnergyPoints = other._EnergyPoints;
        _AttackDamage = other._AttackDamage;
        std::cout << "ScavTrap " << _Name << " assigned." << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode!\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (_HitPoints > 0 && _EnergyPoints > 0)
    {
         --_EnergyPoints;
        std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! | Current energy points: " << _EnergyPoints << std::endl;
    }
    else
        std::cout << "ScavTrap " << _Name << " cannot attack! either out of hit points or energy!" << std::endl;
}