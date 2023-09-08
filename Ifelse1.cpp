#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter age :" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are adult :" << endl;
    }
    else
    {
        cout << "You are not adult :" << endl;
    }

    return 0;
}