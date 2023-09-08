#include <iostream>
using namespace std;

int binary(int num)
{
    int ans = 0;

    while (num > 0)
    {
        int digit = num & 1;
        ans = ans * 10 + digit;
        num = num >> 1;
    }
    return ans;
}
int main()
{

    int num;

    cout << "Enter the decimal number :" << endl;
    cin >> num;

    cout << "The binary of " << num << " will be :" << binary(num) << endl;

    return 0;
}