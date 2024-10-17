#include "Contact.hpp"

// Default constructor
Contact::Contact() {}

// Copy constructor
Contact::Contact(const Contact& other) {
    firstName = other.firstName;
    lastName = other.lastName;
    nickname = other.nickname;
    phoneNumber = other.phoneNumber;
    darkestSecret = other.darkestSecret;
}

// Assignment operator
Contact& Contact::operator=(const Contact& other) {
    if (this != &other) {
        firstName = other.firstName;
        lastName = other.lastName;
        nickname = other.nickname;
        phoneNumber = other.phoneNumber;
        darkestSecret = other.darkestSecret;
    }
    return *this;
}

// Destructor
Contact::~Contact() {}

// Setters
void Contact::setFirstName(const std::string& name) {
    firstName = name;
}
void Contact::setLastName(const std::string& name) {
    lastName = name;
}
void Contact::setNickname(const std::string& name) {
    nickname = name;
}
void Contact::setPhoneNumber(const std::string& number) {
    phoneNumber = number;
}
void Contact::setDarkestSecret(const std::string& secret) {
    darkestSecret = secret;
}

// Getters
std::string Contact::getFirstName() const {
    return firstName;
}
std::string Contact::getLastName() const {
    return lastName;
}
std::string Contact::getNickname() const {
    return nickname;
}
std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}
std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

// Check if contact is empty
bool Contact::isEmpty() const {
    return firstName.empty() || lastName.empty() || nickname.empty() ||
           phoneNumber.empty() || darkestSecret.empty();
}