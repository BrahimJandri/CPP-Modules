#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"



class PhoneBook {
private:
    Contact contacts[8];
    int contactCount;
    bool isInputValid(const std::string &str) const ;
public:
    PhoneBook();
    void    addContact();
    void    searchContacts() const;
    void    displayContact(int index) const;
};

#endif
