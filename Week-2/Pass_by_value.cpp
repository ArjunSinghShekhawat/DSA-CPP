#include <iostream>
using namespace std;

void change(int a)
{
    a = 10;
    cout<<a<<endl;
}
int main()
{

    int a = 90;
    cout << "Before " << a << endl;
    change(a);
    cout << "After " << a << endl;

    return 0;
}