#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
    int contactindex;
    Contact newContact;
    std::string firstName, lastName, nickname, phoneNumber, secret;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, firstName);
    if (firstName.empty()) {
        std::cout << "First name cannot be empty." << std::endl;
        return;
    }
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lastName);
    if (lastName.empty()) {
        std::cout << "Last name cannot be empty." << std::endl;
        return;
    }
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickname);
    if (nickname.empty()) {
        std::cout << "Nickname cannot be empty." << std::endl;
        return;
    }
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty()) {
        std::cout << "Phone number cannot be empty." << std::endl;
        return;
    }
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, secret);
    if (secret.empty()) {
        std::cout << "Darkest secret cannot be empty." << std::endl;
        return;
    }
    std::cout << "Contact added successfully!" << std::endl;
    newContact.setContact(firstName, lastName, nickname, phoneNumber, secret);
    if (contactCount >= 8)
    {
        std::cout << "before contactCount: " << contactCount << std::endl;
        contactindex = contactCount % 8;
        std::cout << "after contactCount: " << contactCount << std::endl;
        std::cout << "contactindex: " << contactindex << std::endl;
        contacts[contactindex] = newContact; // Overwrite the oldest contact if limit reached
        contactCount++;
    }
    else
        contacts[contactCount++] = newContact;
}

void PhoneBook::searchContacts() const {
    if (contactCount == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    displayAllContacts();
    int contactIndex = 0;
    if (contactCount >= 8)
        contactIndex = 8;
    else
        contactIndex = contactCount;
    std::string input;
    int index;

    std::cout << "Enter index of contact to view details (0-" << contactIndex - 1 << "): ";
    std::getline(std::cin, input);

    // Check if input is a single digit
    if (input.length() != 1 || !std::isdigit(input[0])) {
        std::cout << "Invalid input. Please enter a digit between 0 and " << contactIndex - 1 << "." << std::endl;
        return;
    }

    index = input[0] - '0';

    if (index < 0 || index >= contactIndex) {
        std::cout << "Invalid index. Please try again." << std::endl;
        return;
    }
    else
        displayContact(index);
}

void PhoneBook::displayContact(int index) const {
    if (isValidIndex(index)) {
        contacts[index].displayFull();
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

void PhoneBook::displayAllContacts() const {
    std::cout << "| Index | First Name | Last Name  | Nickname   |\n";
    std::cout << "|-------|------------|------------|------------|\n";
    int contactIndex = 0;
    if (contactCount >= 8)
        contactIndex = 8;
    else
        contactIndex = contactCount;
    for (int i = 0; i < contactIndex; ++i) {
        contacts[i].displaySummary(i);
    }
}

bool PhoneBook::isValidIndex(int index) const {
    return index >= 0 && index < 8;
}

void PhoneBook::clearContacts() {
    contactCount = 0;
    std::cout << "All contacts cleared." << std::endl;
}