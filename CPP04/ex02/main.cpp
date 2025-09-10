/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:37 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 19:25:04 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal test;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "\n--- Array of Animals ---\n";
    Animal* animals[4];
    for (int k = 0; k < 2; k++) animals[k] = new Dog();
    for (int k = 2; k < 4; k++) animals[k] = new Cat();

    for (int k = 0; k < 4; k++) delete animals[k];

    std::cout << "\n--- Deep Copy Test ---\n";
    Dog dog1;
    dog1.setBrainIdea(0, "Chase the ball");
    dog1.displayBrainIdea(0);
    {
        Dog dog2;
        dog2 = dog1;
        dog1.setBrainIdea(0, "Eat cheese");
        dog2.displayBrainIdea(0);
        dog2.setBrainIdea(0, "Sleep on the couch");
        dog2.displayBrainIdea(0);
    }
    dog1.displayBrainIdea(0);
    return 0;
}
