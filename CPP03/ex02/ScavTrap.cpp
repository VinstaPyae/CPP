#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default") {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << _Name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "ScavTrap " << _Name << " assigned." << std::endl;
    }
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _Name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_HitPoints > 0 && _EnergyPoints > 0) {
        --_EnergyPoints;
        std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _Name << " cannot attack!" << std::endl;
    }
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _Name << " destroyed." << std::endl;
}
