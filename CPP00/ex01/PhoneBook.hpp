#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     contactCount;
    public:
        PhoneBook(void);
        void    addContact(void);
        void    searchContacts(void) const;
        void    displayContact(int index) const;
        void    displayAllContacts(void) const;
        bool    isValidIndex(int index) const;
        void    clearContacts(void);
};

#endif