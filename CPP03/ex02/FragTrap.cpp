#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    _HitPoints = other._HitPoints;
    _EnergyPoints = other._EnergyPoints;
    _AttackDamage = other._AttackDamage;
    std::cout << "FragTrap " << _Name << " copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _Name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _Name << " is requesting a high five!" << std::endl;
}
