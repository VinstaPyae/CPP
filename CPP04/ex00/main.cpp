/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:26:37 by pzaw              #+#    #+#             */
/*   Updated: 2025/09/09 18:37:56 by pzaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongDog();
    const WrongAnimal* i = new WrongCat();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "-------------------------------------\n";
    const Animal* a = new Animal();
    const Animal* b = new Cat();
    const Animal* c = new Dog();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    a->makeSound();
    b->makeSound();
    c->makeSound();
    delete a;
    delete b;
    delete c;
    return 0;
}
