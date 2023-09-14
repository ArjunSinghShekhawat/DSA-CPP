#include <iostream>
using namespace std;

int main()
{

    // pointer -> pointer is a variable in witch store address of another variable.
    // null pointer
    // copy kese krte hai pointer
    // size of pointer
    // pointer creation
    // address of operator and difference of operator

    int a = 90;
    int b = 20;

    cout << "The value of a will be :" << a << endl;
    cout << "The value of b will be :" << b << endl;

    // address of operator
    cout << "The address of a will be :" << &a << endl;
    cout << "The address of b will be :" << &b << endl;

    // pointer creation
    int num = 10;
    int *ptr = &num;

    cout << "The value of num will be :" << num << endl;
    cout << "The address of num will be :" << &num << endl;
    cout << "The address of num using ptr will be :" << ptr << endl;
    cout << "The value of num using *ptr will be :" << *ptr << endl;

    // size of pointer
    int val = 10;
    int *ptr1 = &val;

    char ch = 'a';
    char *ptr2 = &ch;

    double data = 90.65;
    double *ptr3 = &data;

    cout << "The sizeof of ptr1 will be :" << sizeof(ptr1) << endl;
    cout << "The sizeof of ptr2 will be :" << sizeof(ptr2) << endl;
    cout << "The sizeof of ptr3 will be :" << sizeof(ptr3) << endl;

    // null pointer
    // int *qtr;//----->segmentation fault and bad prectice initialize null pointer

    // cout << *qtr << endl;

    int *qtr = nullptr; // good prectice
    // cout << *qtr << endl;

    int val0 = 12;

    qtr = &val0;

    cout << "value of *null " << *qtr << endl;

    // copy pointr
    int val1 = 20;

    int *first = &val1;
    int *second = first;
    int *third = second;

    cout << "Using *first value of val1 will be :" << *first << endl;
    cout << "Using *second value of val1 will be :" << *second << endl;
    cout << "Using *third value of val1 will be :" << *third << endl;

    int *null = nullptr;
    // cout << *null << endl;

    null = &val1;
    cout << *null << endl;
    cout << "Hellow arjun" << endl;

    return 0;
}