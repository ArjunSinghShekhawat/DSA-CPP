#include <iostream>
#include <vector>
using namespace std;

int squreRoot(int num)
{
    int start = 0;
    int end = num / 4;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int result = mid * mid;
        if (result == num)
        {
            return mid;
        }
        else if (result < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int num;

    cout << "Enter number :" << endl;
    cin >> num;

    double ans = squreRoot(num);

    int digit;

    cout << "Enter the digit :" << endl;
    cin >> digit;

    double step = 0.1;

    for (int i = 0; i < digit; i++)
    {
        for (double j = ans; j * j <= num; j = step + j)
        {
            ans = j;
        }
        step = step / 10;
    }
    cout << "Squre Root of " << num << " will be :" << ans << endl;

    return 0;
}