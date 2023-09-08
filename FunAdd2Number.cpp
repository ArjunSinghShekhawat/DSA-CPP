#include <iostream>
using namespace std;

int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int a, b;

    cout << "Enter a and b:" << endl;
    cin >> a >> b;

    cout << "The sum of a and b will be :" << add(a, b) << endl;
    return 0;
}