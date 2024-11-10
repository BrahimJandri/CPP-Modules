#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
public:
    PhoneBook();
    void    addContact();
    void    searchContacts() const;
    void    displayContact(int index) const;
};

#endif
