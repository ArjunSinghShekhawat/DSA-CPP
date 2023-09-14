#include <iostream>
using namespace std;

int main()
{

    int a = 5;

    // pointer copy
    int *ptr = &a;
    int *qtr = ptr;

    cout << "The value of *ptr :" << *ptr << endl;
    cout << "The value of *qtr :" << *qtr << endl;

    cout << "The value of (*ptr)*2 :" << (*ptr) * 2 << endl;
    cout << "The value of (*qtr)*2 :" << (*qtr) * 2 << endl;

    int num = 10;
    int *ptr1 = &num;
    int *ptr2 = ptr1;
    int *ptr3 = ptr2;

    cout << "The value of a          " << a << endl;
    cout << "The value of &a         " << &a << endl;
    cout << "The value of ptr1       " << ptr1 << endl;
    cout << "The value of &ptr1      " << &ptr1 << endl;
    cout << "The value of ptr2       " << ptr2 << endl;
    cout << "The value of &ptr2      " << &ptr2 << endl;
    cout << "The value of ptr3       " << ptr3 << endl;
    cout << "The value of &ptr3      " << &ptr3 << endl;
    cout << "The value of (*ptr1+*ptr2+*ptr3)         " << ((*ptr1) + (*ptr2) + (*ptr3)) << endl;
    cout << "The value of (*Ptr1)/2-(*ptr2)/2          " << ((*ptr1) / 2 - (*ptr2) / 2) << endl;

    return 0;
}