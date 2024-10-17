#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8]; // Array to hold up to 8 contacts
    int currentIndex; // To track the current index for adding contacts

public:
    // Constructor
    PhoneBook();

    // Methods
    void addContact();
    void searchContacts() const;
    void displayContact(int index) const;
};

#endif // PHONEBOOK_HPP