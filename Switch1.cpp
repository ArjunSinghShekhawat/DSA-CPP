
#include<iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter choice :(+,-,*,/) :" << endl;
    cin >> choice;

    int num1, num2;

    cout << "Enter first number :" << endl;
    cin >> num1;

    cout << "Enter second number :" << endl;
    cin >> num2;

    switch (choice)
    {
    case '+':
        cout << "Sum -> " << (num1 + num2) << endl;
        break;

    case '-':
        cout << "Difference -> " << (num1 - num2) << endl;
        break;

    case '*':
        cout << "Multiplication -> " << (num1 * num2) << endl;
        break;

    case '/':
        cout << "Division -> " << (num1 / num2) << endl;
        break;

    default:
        cout << "Thank you :" << endl;
        break;
    }
}