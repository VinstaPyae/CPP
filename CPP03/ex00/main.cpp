#include "ClapTrap.hpp"

int main() {
    ClapTrap alpha("Alpha");
    ClapTrap beta("Beta");

    std::cout << "\n--- Alpha attacks Beta 3 times ---\n";
    alpha.attack("Beta");
    alpha.attack("Beta");
    alpha.attack("Beta");

    std::cout << "\n--- Beta takes damage ---\n";
    beta.takeDamage(4);   // HP: 6 left
    beta.takeDamage(6);   // HP: 0 left (dead)

    std::cout << "\n--- Beta tries to attack (should fail) ---\n";
    beta.attack("Alpha");

    std::cout << "\n--- Alpha takes damage and repairs ---\n";
    alpha.takeDamage(5);  // HP: 5 left
    alpha.beRepaired(3);  // HP: 8 left
    alpha.beRepaired(5);  // HP: 10 (max or more)

    std::cout << "\n--- Alpha repairs until no energy ---\n";
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1); // should now be out of energy

    std::cout << "\n--- Alpha tries to attack with no energy (should fail) ---\n";
    alpha.attack("Beta");

    std::cout << "\n--- Beta tries to repair with 0 HP (should fail) ---\n";
    beta.beRepaired(5);

    std::cout << "\nEnd of simulation.\n";
    return 0;
}
