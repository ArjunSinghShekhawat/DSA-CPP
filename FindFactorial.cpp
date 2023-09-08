#include <iostream>
using namespace std;

int findFactorial(int num)
{

    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    cout << "Factorial of " << num << " will be :" << findFactorial(num) << endl;
    return 0;
}