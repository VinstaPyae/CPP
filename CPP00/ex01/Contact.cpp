#include "Contact.hpp"

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string sc) {
    firstName = fn;
    lastName = ln;
    nickname = nn;
    phoneNumber = pn;
    secret = sc;
}

std::string Contact::formatField(std::string field) const {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}

void Contact::displaySummary(int index) const {
    std::cout << "|"
              << std::setw(10) << index << "|"
              << std::setw(10) << formatField(firstName) << "|"
              << std::setw(10) << formatField(lastName) << "|"
              << std::setw(10) << formatField(nickname) << "|\n";
}

void Contact::displayFull() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << secret << std::endl;
}
