#ifdef CONTACT.HPP
#define CONTACT.HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    // Constructor
    Contact() {}

    // Setters
    void setFirstName(const std::string& name) { firstName = name; }
    void setLastName(const std::string& name) { lastName = name; }
    void setNickName(const std::string& name) { nickName = name; }
    void setPhoneNumber(const std::string& number) { phoneNumber = number; }
    void setDarkestSecret(const std::string& secret) { darkestSecret = secret; }

    // Getters
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickName() const { return nickName; }
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getDarkestSecret() const { return darkestSecret; }

    // Destructor
    ~Contact() {}
};

#endif CONTACT.HPP