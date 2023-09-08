#include <iostream>
using namespace std;

string findEvenOdd(int num)
{
    if (num & 1)
    {
        return "Odd";
    }
    else
    {
        return "Even";
    }
}
int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    cout << "Number " << num << " is " << findEvenOdd(num) << endl;

    return 0;
}