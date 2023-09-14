//pointer is a variable in witch store address of another variable.
#include <iostream>
using namespace std;

int main()
{

    // what is address
    int a = 10;
    int b = 10;

    cout << "Address of a will be :" << &a << endl;
    cout << "Address of b will be :" << &b << endl;

    // & address of operator

    cout << endl;
    // pointer creation
    int num = 10;
    int *ptr = &num;

    cout << "The value of num will be :" << num << endl;
    cout << "The value of num using *Ptr :" << *ptr << endl;
    cout << "The address of ptr will be :" << &ptr << endl;
    cout << "The address of num will be :" << &num << endl;
    cout << "The value of ptr will be :" << ptr << endl;

    // num pointer
    // int *qtr;//-------? bad prectice
    // cout << *"The value of qtr wil be :" << *qtr << endl;//segmentation fault / run time error / garbage value / compiler dependent

    int *qtr = nullptr; // good prectice
    // cout << "The value of *qtr :" << *qtr << endl;
    int val = 90;
    qtr = &val;
    cout << "Value of val will be :" << *qtr << endl;

    // pointer copy concept

    int data = 10;
    int *dataptr = &data;
    int *secondDataPtr = dataptr;

    cout << "The value of data using *dataptr :" << (*dataptr) << endl;
    cout << "The value of data using *secondDataPtr :" << (*secondDataPtr) << endl;

    cout << "The address of dataptr :" << &dataptr << endl;
    cout << "The address of secondataptr :" << &secondDataPtr << endl;

    cout << "The value of dataptr :" << dataptr << endl;
    cout << "The value of seconddataptr :" << secondDataPtr << endl;

    // arithmetic operatin
    int data1 = 20;
    int *data1Ptr = &data1;

    cout<<&data1<<endl;

    cout << (*data1Ptr) + 1 << endl;
    cout<<(data1Ptr+1)<<endl;


    int val1 = 90;
    int* val1Ptr = &val1;

    char val2 ='a';
    char *val2Ptr = &val2;

    double val3 = 23.544;
    double *val3Ptr = &val3;

    cout<<"Size of val1Ptr will be : "<<sizeof(val1Ptr)<<endl;
    cout<<"Size of val2Ptr will be : "<<sizeof(val2Ptr)<<endl;
    cout<<"Size of val3Ptr will be : "<<sizeof(val3Ptr)<<endl;
    return 0;
}