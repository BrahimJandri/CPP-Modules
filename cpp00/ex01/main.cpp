#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command) || std::cin.eof())
        {
            std::cout << std::endl
                      << "Exiting program." << std::endl;
            break;
        }
        else if (command == "ADD")
        {
            phoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "You Exiting The PhoneBook" << std::endl;
            break;
        }
        else
        {
            std::cout << "Unknown command!" << std::endl;
        }
    }
    return 0;
}
