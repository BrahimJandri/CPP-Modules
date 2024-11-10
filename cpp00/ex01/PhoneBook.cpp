#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {};

void PhoneBook::addContact()
{
    Contact newContact;
    std::string input;

    std::cout << "Enter First Name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, input);
    newContact.setNickName(input);

    while (true)
    {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, input);

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
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    contacts[contactCount % 8] = newContact;
    contactCount++;
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
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;
    std::cin.ignore();
    if (index >= 0 && index < (contactCount < 8 ? contactCount : 8))
    {
        displayContact(index);
    }
    else
    {
        std::cout << "Invalid index!" << std::endl;
    }
}

void PhoneBook::displayContact(int index) const
{
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
