#include <iostream>
using namespace std;

int main()
{
    int num = 12;
    int *ptr = &num;

    float num1 = 23.54;
    float *qtr = &num1;

    double num3 = 65.7666;
    double *ctr = &num3;

    cout << "Size of ptr :" << sizeof(ptr) << endl;
    cout << "Size of qtr :" << sizeof(qtr) << endl;
    cout << "Size of ctr :" << sizeof(ctr) << endl;

    // int *a = nullptr;//0

    // cout << *a << endl;

    cout<<ptr<<endl;
    ptr+=1;
    cout<<ptr<<endl;
    return 0;
}