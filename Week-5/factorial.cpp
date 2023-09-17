#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    vector<int> ans;
    int carry = 0;
    ans.push_back(1);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int digit = ans[j] * i + carry;
            ans[j] = digit % 10;
            carry = digit / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());

    for (auto value : ans)
    {
        cout << value;
    }
    cout << endl;
}