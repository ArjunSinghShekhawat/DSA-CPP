#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char ch[100];

    cout << "Enter name :" << endl;
    cin >> ch;

    for (int i = 0; i < 6; i++)
    {
        cout << "Index " << i << " value " << ch[i] << endl;
    }
    int value = (int)ch[5];

    cout << "Value is :" << value << endl;

    char name[100];

    cout << "Enter name :" << endl;
    //cin >> name;
    cin.getline(name,50);

    cout << name << endl;

    char data[100];
    
    return 0;
}