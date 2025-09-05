#include "Animal.hpp"
#include "Cat.hpp"
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
    i->makeSound(); //will output the WrongCat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    const Animal* a = new Animal();
    const Animal* b = new Cat();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    b->makeSound(); //will output the WrongCat sound!
    a->makeSound();
    delete a;
    delete b;
    return 0;
}
