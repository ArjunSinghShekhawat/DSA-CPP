#include <iostream>
using namespace std;

int division(int divided, int divisior)
{

    int start = 0;
    int end = abs(divided / 2);
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (abs(mid * divisior) == abs(divided))
        {
            if (divided > 0 && divisior > 0 || divided < 0 && divisior < 0)
            {
                return mid;
            }
            else
            {
                return -mid;
            }
        }
        else if (abs(mid * divisior) < abs(divided))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (divided > 0 && divisior > 0 || divided < 0 && divisior < 0)
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
    int divided;
    int divisior;

    cout << "Enter divided :" << endl;
    cin >> divided;

    cout << "Enter divisior :" << endl;
    cin >> divisior;

    if(divisior==0){
        cout<<"Infinite...."<<endl;
        return 0;
    }

    double ans = division(divided, divisior);

    int digit;
    cout << "Enter digit :" << endl;
    cin >> digit;


    double step = 0.1;

    for (int i = 0; i < digit; i++)
    {
        for (double j = ans; j*divisior <= divided; j = step + j)
        {
            ans = j;
        }
        step = step / 10;
    }
    cout << "The qutient will be :" << ans << endl;

    return 0;
}