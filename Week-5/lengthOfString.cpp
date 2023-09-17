#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[100])
{

    int i = 0;

    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{

    char name[100];

    cout << "Enter name :" << endl;
    cin.getline(name, 50);

    getLength(name);

    cout << "Length will be :" << getLength(name) << endl;
    cout << "Lenght will be :" << strlen(name) << endl;
    return 0;
}