#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    if (isPrime(num))
    {
        cout << "Prime Number :" << endl;
    }
    else
    {
        cout << "Not Prime Number :" << endl;
    }

    return 0;
}