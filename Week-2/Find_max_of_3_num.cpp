#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{

    int a, b, c;

    cout << "Enter the number a,b and c" << endl;
    cin >> a >> b >> c;

    int maxiNum = max(a, b, c);
    cout << "Maximum number is :" << maxiNum << endl;

    return 0;
}