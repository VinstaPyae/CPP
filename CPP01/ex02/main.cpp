#include <iostream>
#include <string>

int main(){
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    std::cout << "The memory address of the brain variable: " << &brain << std::endl;
    std::cout << "The memory address of the stringPTR variable: " << stringPTR << std::endl;
    std::cout << "The memory address of the stringREF variable: " << &stringREF << std::endl;
    std::cout << "The value of the brain variable: " << brain << std::endl;
    std::cout << "The value pointed to by the stringPTR variable: " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF variable: " << stringREF << std::endl;
    return 0;
}
