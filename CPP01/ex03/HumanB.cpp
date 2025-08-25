#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB()
{
    std::cout<< _name << " : destructed!\n";
}

void HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
