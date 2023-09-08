#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phoneNumber;
};

int main()
{
    const int maxSize = 100;    // Maximum number of contacts
    Contact phoneBook[maxSize]; // Array of Contact structures
    int numContacts = 0;        // Current number of contacts in the array

    // Add contacts to the phone book array
    phoneBook[numContacts++] = {"John Doe", "123-456-7890"};
    phoneBook[numContacts++] = {"Jane Smith", "987-654-3210"};
    phoneBook[numContacts++] = {"arjun", "8005792198"};
    // Add more contacts here

    std::string searchName;
    std::cout << "Enter a name to search for: ";
    std::cin >> searchName;

    bool found = false;
    for (int i = 0; i < numContacts; ++i)
    {
        if (phoneBook[i].name == searchName)
        {
            std::cout << "Phone number for " << searchName << ": " << phoneBook[i].phoneNumber << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "Name not found in phone book." << std::endl;
    }

    return 0;
}