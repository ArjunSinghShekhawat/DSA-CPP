#include <iostream>
using namespace std;

int main()
{

    // and operator &
    cout << (true & false) << endl;
    cout << (true & true) << endl;
    cout << (false & true) << endl;
    cout << (false & false) << endl;

    cout << endl;
    // or operator
    cout << (true | false) << endl;
    cout << (true | true) << endl;
    cout << (false | true) << endl;
    cout << (false | false) << endl;

    // zor operator
    cout << endl;
    cout << (true ^ false) << endl;
    cout << (true ^ true) << endl;
    cout << (false ^ true) << endl;
    cout << (false ^ false) << endl;

    // not operator
    cout << endl;
    cout << !(true) << endl;
    cout << !(false) << endl;

    // left shift and right shift operator
    int num = 10;

    cout << endl;
    cout << (num >> 1) << endl;
    cout << (num << 1) << endl;

    int val = -100;

    cout << endl;
    cout << (val >> 1) << endl;
    cout << (val << 1) << endl;

    // increment and decrement operator
    int a = 10;

    cout << endl;
    cout << (a++) << endl;

    cout<<a<<endl;

    cout<<(++a)<<endl;

    cout<<endl;

    cout<<(a--)<<endl;

    cout<<a<<endl;
    cout<<(--a)<<endl;

    cout<<endl;

    
    return 0;
}