#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    char ch;

    cout << "Enter choice (+,-,/,*)" << endl;
    cin >> ch;

    cout << "Enter the number 1 and 2 :" << endl;
    cin >> num1 >> num2;

    switch (ch)
    {
    case '+':
        cout << "(a+b) = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "(a-b) = " << num1 + num2 << endl;
        break;

    case '*':
        cout << "(a*b) =" << (num1 * num2) << endl;
        break;

    case '/':
        cout << "(a/b) =" << (num1 / num2) << endl;
        break;

    default:
        cout << "Please enter write operand" << endl;

        break;
    }
    return 0;
}