#include <iostream>
using namespace std;

void change(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

     cout<<"swap "<<"a = "<<a<<" b = "<<b<<endl;
}
int main()
{

    int a, b;
    cout << "Enter the number a and b :" << endl;
    cin >> a >> b;

    cout<<"Before swap "<<"a = "<<a<<" b = "<<b<<endl;
    change(a, b);
    cout<<"After swap "<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}