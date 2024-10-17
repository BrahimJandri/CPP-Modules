#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

// Constructor
PhoneBook::PhoneBook() : currentIndex(0) {}

// Add a new contact
void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    if (newContact.isEmpty()) {
        std::cout << "All fields must be filled!" << std::endl;
        return;
    }

    contacts[currentIndex] = newContact; // Add the new contact
    currentIndex = (currentIndex + 1) % 8; // Update index, wrap around if needed
}

// Display contacts in a formatted way
void PhoneBook::searchContacts() const {
    std::cout << std::setw(10) << "Index" 
              << std::setw(10) << "First Name" 
              << std::setw(10) << "Last Name" 
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (!contacts[i].isEmpty()) {
            std::cout << std::setw(10) << i 
                      << std::setw(10) << contacts[i].getFirstName().substr(0, 9) + (contacts[i].getFirstName().length() > 9 ? "." : "")
                      << std::setw(10) << contacts[i].getLastName().substr(0, 9) + (contacts[i].getLastName().length() > 9 ? "." : "")
                      << std::setw(10) << contacts[i].getNickname().substr(0, 9) + (contacts[i].getNickname().length() > 9 ? "." : "") << std::endl;
        }
    }
}