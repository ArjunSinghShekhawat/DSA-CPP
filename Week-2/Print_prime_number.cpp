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

    for (int i = 1; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}