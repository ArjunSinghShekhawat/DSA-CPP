#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *pta = &a;

    cout << "Size of pta will be  :" << sizeof(pta) << endl;

    char ch = 'a';
    char *ptch = &ch;
    cout << "Size of ptch will be :" << sizeof(ptch) << endl;

    double d = 34.6578;
    double *dtr = &d;
    cout << "Size of dtr will be  :" << sizeof(dtr) << endl;
    return 0;
}