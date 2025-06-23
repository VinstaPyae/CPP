#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string secret;

public:
    void setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string sc);
    void displaySummary(int index) const;
    void displayFull(void) const;
    std::string formatField(std::string field) const;
};

#endif
