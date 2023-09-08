#include <iostream>
using namespace std;

int quident(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend / 2);
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (abs(mid * divisor) == abs(dividend))
        {
            if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0)
            {
                return mid;
            }
            else
            {

                return -mid;
            }
        }
        else if (abs(mid * divisor) < abs(dividend))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0)
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend;
    int divisor;

    cout << "Enter the dividend :" << endl;
    cin >> dividend;

    cout << "Enter the divisor :" << endl;
    cin >> divisor;

    
    if(divisor==0)
    {
        cout<<"Infinite....."<<endl;
        return 0;
    }

    cout << quident(dividend, divisor);

    return 0;
}