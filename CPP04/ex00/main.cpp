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
    return 0;
}
