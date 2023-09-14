#include <iostream>
using namespace std;

int main()
{
    // pointer in cpp is a variable in which store address of another variable
    int a = 5;

    // pointer creation
    int *ptr = &a;

    // & ->address of operator
    // * -> defference / value of address operator

    cout << "The value of a will be :" << *ptr << endl;
    cout << "The value of a will be :" << a << endl;
    cout << "The address of a will be :" << &a << endl;
    cout << "The address of ptr will be :" << &ptr << endl;
    cout << "The value of ptr will be :" << ptr << endl;

    return 0;
}