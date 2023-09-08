#include <iostream>
using namespace std;

void max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "Big number a : " << a << endl;
    }
    else if (b > c && b > a)
    {
        cout << "Big number b :" << b << endl;
    }
    else
    {
        cout << "Big Number c :" << c << endl;
    }
}
int main()
{

    int a, b, c;

    cout << "Enter the value a,b and c :" << endl;
    cin >> a >> b >> c;

    max(a, b, c);

    return 0;
}