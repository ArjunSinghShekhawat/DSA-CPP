#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phoneNumber;
};

class PhoneBook {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const std::string& name, const std::string& phoneNumber) {
        contacts.push_back({name, phoneNumber});
        std::cout << "Contact added: " << name << ", " << phoneNumber << std::endl;
    }

    void searchContact(const std::string& searchName) {
        bool found = false;
        for (const Contact& contact : contacts) {
            if (contact.name == searchName) {
                std::cout << "Phone number for " << searchName << ": " << contact.phoneNumber << std::endl;
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << "Name not found in phone book." << std::endl;
        }
    }

    void displayContacts() {
        std::cout << "Contacts:" << std::endl;
        for (const Contact& contact : contacts) {
            std::cout << contact.name << ": " << contact.phoneNumber << std::endl;
        }
    }
};

int main() {
    PhoneBook phoneBook;
    
    phoneBook.addContact("John Doe", "123-456-7890");
    phoneBook.addContact("arjun", "987-654-3210");
    
    phoneBook.displayContacts();
    
    std::string searchName;
    std::cout << "Enter a name to search for: ";
    std::cin >> searchName;
    phoneBook.searchContact(searchName);

    std::string name = "mukesh";
    std::string phone = "78459652";
    phoneBook.addContact(name,phone);




    return 0;
}



