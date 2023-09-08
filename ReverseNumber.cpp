#include <iostream>
#include <limits>
using namespace std;

int reverse(int num)
{
    bool flag = false;
    int ans = 0;

    if (num > INT32_MAX || num <= INT32_MIN)
    {
        return 0;
    }

    if (num < 0)
    {
        num = abs(num);
        flag = true;
    }

    while (num > 0)
    {
        if (ans > INT32_MAX / 10)
        {
            return 0;
        }
        int digit = num % 10;
        ans = ans * 10 + digit;
        num = num / 10;
    }

    return flag ? -ans : ans;
}
int main()
{

    int num;
    cout << "Enter the number :" << endl;
    num = -214748364;

    cout << "Reverse number will be :" << reverse(num) << endl;

    return 0;
}