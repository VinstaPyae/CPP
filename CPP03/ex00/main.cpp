/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:45:21 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/05 15:45:22 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap alpha("Alpha");
    ClapTrap beta("Beta");

    std::cout << "\n--- Alpha attacks Beta 3 times ---\n";
    alpha.attack("Beta");
    alpha.attack("Beta");
    alpha.attack("Beta");

    std::cout << "\n--- Beta takes damage ---\n";
    beta.takeDamage(4);
    beta.takeDamage(6);

    std::cout << "\n--- Beta tries to attack (should fail) ---\n";
    beta.attack("Alpha");

    std::cout << "\n--- Alpha takes damage and repairs ---\n";
    alpha.takeDamage(5);
    alpha.beRepaired(3);
    alpha.beRepaired(5);

    std::cout << "\n--- Alpha repairs until no energy ---\n";
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1);
    alpha.beRepaired(1);

    std::cout << "\n--- Alpha tries to attack with no energy (should fail) ---\n";
    alpha.attack("Beta");

    std::cout << "\n--- Beta tries to repair with 0 HP (should fail) ---\n";
    beta.beRepaired(5);

    std::cout << "\nEnd of simulation.\n";
    return 0;
}
