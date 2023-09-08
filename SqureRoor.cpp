#include <iostream>
using namespace std;

int squreRoot(int num)
{
    int start = 1;
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

    cout << "Enter the number :" << endl;
    cin >> num;

    //   cout << squreRoot(num) << endl;

    double ans = squreRoot(num);

    int count;

    cout << "Enter count number you are display after dot :" << endl;
    cin >> count;
    double digit = 0.1;

    for (int i = 0; i < count; i++)
    {
        for (double j = ans; j*j <= num; j = digit + j)
        {
           ans = j;
        }
        digit = digit / 10;
    }
    cout << "SqureRoot of " << num << " will be :" << ans << endl;

    return 0;
}