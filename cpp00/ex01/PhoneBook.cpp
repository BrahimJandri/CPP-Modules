#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {};

bool PhoneBook::isInputValid(const std::string &str) const
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!isprint(str[i]))
        {
            return false;
        }
    }
    return true;
}

void PhoneBook::addContact()
{
    Contact newContact;
    std::string input;
    std::cout << "Enter First Name: ";
    if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input) || input.empty())
    {
        std::cout << "Invalid input or input terminated. Exiting addContact." << std::endl;
        return;
    }
    newContact.setFirstName(input);
    std::cout << "Enter Last Name: ";
    if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input) || input.empty())
    {
        std::cout << "Invalid input or input terminated. Exiting addContact." << std::endl;
        return;
    }
    newContact.setLastName(input);
    std::cout << "Enter Nickname: ";
    if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input) || input.empty())
    {
        std::cout << "Invalid input or input terminated. Exiting addContact." << std::endl;
        return;
    }
    newContact.setNickName(input);
    while (true)
    {
        std::cout << "Enter Phone Number: ";
        if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input) || input.empty())
        {
            std::cout << "Invalid input or input terminated. Exiting addContact." << std::endl;
            return;
        }
        bool isValid = true;
        for (size_t i = 0; i < input.length(); ++i)
        {
            if (!isdigit(input[i]))
            {
                isValid = false;
                break;
            }
        }
        if (isValid)
        {
            newContact.setPhoneNumber(input);
            break;
        }
        else
        {
            std::cout << "Invalid phone number. Please enter digits only." << std::endl;
        }
    }
    std::cout << "Enter Darkest Secret: ";
    if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input))
    {
        std::cout << "Invalid input or input terminated. Exiting addContact." << std::endl;
        return;
    }
    newContact.setDarkestSecret(input);
    contacts[contactCount % 8] = newContact;
    contactCount++;
    std::cout << "Contact added Successfully ✅." << std::endl;
}

void PhoneBook::searchContacts() const
{
    if (contactCount == 0)
    {
        std::cout << "No contacts available to display." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < (contactCount < 8 ? contactCount : 8); i++)
    {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName())
                  << "|" << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName())
                  << "|" << std::setw(10) << (contacts[i].getNickName().length() > 10 ? contacts[i].getNickName().substr(0, 9) + "." : contacts[i].getNickName())
                  << std::endl;
    }

    int index;
    std::string input;
    std::cout << "Enter the index of the contact to display: ";

    while (true)
    {
        if (!std::getline(std::cin, input) || std::cin.eof() || !isInputValid(input) || input.empty())
        {
            std::cout << "Invalid input or input terminated. Exiting Searching." << std::endl;
            return;
        }
        std::stringstream ss(input);
        if (ss >> index && !(ss >> input) && index >= 0 && index < (contactCount < 8 ? contactCount : 8))
        {
            break;
        }
        else
        {
            std::cout << "Invalid index! Please enter a valid index: ";
        }
    }
    displayContact(index);
}

void PhoneBook::displayContact(int index) const
{
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
