#include <iostream>
using namespace std;

int Even_sum(int num)
{
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int Odd_sum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    cout << "Sum of even number :" << Even_sum(num) << endl;
    cout << "Sum of odd number :" << Odd_sum(num) << endl;
    return 0;
}