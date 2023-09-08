#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{

    int first, second;

    cout << "Enter first and second number :" << endl;
    cin >> first >> second;

    cout << "Print prime number " << first << " to " << second << " :" << endl;

    for (int i = first; i <= second; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}