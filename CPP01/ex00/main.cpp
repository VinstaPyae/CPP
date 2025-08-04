#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    std::cout << "Creating a new Zombie on the stack:" << std::endl;
    randomChump("StackZombie");
    std::cout << "\nCreating a new Zombie on the heap:" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    std::cout << "Deleting the heap Zombie:" << std::endl;
    delete heapZombie; // Clean up the heap zombie
    return 0;
}