#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Guardian");

    scav.attack("Intruder");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
