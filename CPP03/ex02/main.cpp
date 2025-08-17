#include "FragTrap.hpp"

int main() {
    FragTrap frag("Terminator");

    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return 0;
}
