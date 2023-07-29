#include <iostream>
using namespace std;

int main()
{

    // Type casting
    // 1.implicit
    // 2.explicit

    //implicit type casting
    char ch = 97;
    cout<<"The value of ch is :"<<ch<<endl;

    int c = 'a';
    cout<<"The value of c is :"<<c<<endl;


    //explicit type casting
    int num = 10;
    float data = 192.43;

    cout<<"Sum of num and data will be :"<<(num+(int)data)<<endl;


    cout<<12/5<<endl;
    cout<<12.0/5<<endl;
    cout<<12/5.0<<endl;


    cout<<sizeof((double)22/3)<<endl;
    cout<<sizeof((float)22/3)<<endl;


    cout<<32.43/5<<endl;


    return 0;
}