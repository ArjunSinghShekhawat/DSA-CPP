#include <iostream>
using namespace std;

int main()
{

    int num = 90;

    cout << "The address of num :" << &num << endl;

    int *ptr = &num;

    cout << "The value of ptr :" << ptr << endl;
    cout << "The value of *ptr :" << (*ptr) << endl;
    cout << "The address of ptr :" << (&ptr) << endl;
    
    return 0;
}