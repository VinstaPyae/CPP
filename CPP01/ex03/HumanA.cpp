#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA()
{
    std::cout << _name << ": destructed!\n";
}

void HumanA::attack()
{
    std::cout << _name << " attack with their " << _weapon.getType() << std::endl;
}
