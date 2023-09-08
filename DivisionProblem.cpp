#include <iostream>
#include <vector>
using namespace std;

int division(int divided, int divisor)
{

    int strat = 0;
    int end = abs(divided / 2);
    int mid = strat + (end - strat) / 2;
    int ans;

    while (strat <= end)
    {
        mid = strat + (end - strat) / 2;

        if (abs(mid * divisor) == abs(divided))
        {
            if (divided > 0 && divisor > 0 || divided < 0 && divisor < 0)
            {
                return mid;
            }
            else
            {
                return -mid;
            }
        }
        else if (abs(mid * divisor) < abs(divided))
        {
            ans = mid;
            strat = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (divided > 0 && divisor > 0 || divided < 0 && divisor < 0)
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
    // division problem
    int divided;
    int divisor;

    cout << "Enter divided :" << endl;
    cin >> divided;

    cout << "Enter divisor :" << endl;
    cin >> divisor;

    if (divisor == 0)
    {
        cout << "Infinite...";
        return 0;
    }
    bool flag = true;
    double ans;
    if (division(divided, divisor) < 0)
    {
        ans = abs(division(divided, divisor));
        flag = false;
    }
    int digit;

    cout << "Enter digit :" << endl;
    cin >> digit;

    double step = 0.1;
    int temp = abs(divisor);

    for (int i = 0; i < digit; i++)
    {
        for (double j = ans; ans * temp <= divided; j = j + step)
        {
            ans = j;
        }
        step = step / 10;
    }
    if (flag == false)
    {
        cout << "Ans :" << -ans << endl;
    }
    else
    {
        cout << "Ans :" << ans << endl;
    }

    return 0;
}