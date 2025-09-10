/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:45:39 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/05 15:45:40 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap alpha("Alpha");
    ScavTrap beta("Beta");

    std::cout << "\n--- Gate Keeper mode on ---\n";
    alpha.guardGate();
    beta.guardGate();

    std::cout << "\n--- Alpha attacks Beta 3 times ---\n";
    alpha.attack("Beta");
    alpha.attack("Beta");
    alpha.attack("Beta");
    // alpha.ClapTrap::attack("Beta");

    std::cout << "\n--- Beta takes damage ---\n";
    beta.takeDamage(40);   // HP: 6 left
    beta.takeDamage(20);   // HP: 0 left (dead)
    beta.takeDamage(40);
    std::cout << "\n--- Beta tries to attack (should fail) ---\n";
    beta.attack("Alpha");

    std::cout << "\n--- Alpha takes damage and repairs ---\n";
    alpha.takeDamage(5);  // HP: 5 left
    alpha.beRepaired(3);  // HP: 8 left
    alpha.beRepaired(5);  // HP: 10 (max or more)

    std::cout << "\n--- Alpha repairs until no energy ---\n";
    for (int i=0; i < 45; i++)
    alpha.beRepaired(1);

    std::cout << "\n--- Alpha tries to attack with no energy (should fail) ---\n";
    alpha.attack("Beta");

    std::cout << "\n--- Beta tries to repair with 0 HP (should fail) ---\n";
    beta.beRepaired(5);

    std::cout << "\nEnd of simulation.\n";
    return 0;
}
