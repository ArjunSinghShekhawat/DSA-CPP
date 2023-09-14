#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    int **qtr = &ptr;
    int ***rtr = &qtr;

    cout << "a :" << a << endl;
    cout << "&a  :" << (&a) << endl;
    cout << "ptr :" << ptr << endl;
    cout << "&ptr  :" << &ptr << endl;
    cout << "qtr :" << qtr << endl;
    cout << "&qtr   :" << &qtr << endl;

    cout<<"Value of a :"<<(**qtr)<<endl;
    cout<<"Value of a "<<(*qtr)<<endl;
    cout<<"Value of a :"<<(***rtr)<<endl;

    return 0;
}