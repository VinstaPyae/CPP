#include "main.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook appliWrongCation!" << std::endl;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.addContact();
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "Exiting the PhoneBook appliWrongCation." << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}