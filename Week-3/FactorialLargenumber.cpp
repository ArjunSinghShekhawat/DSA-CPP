#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> ans;

    int carry = 0;
    ans.push_back(1);
    int n;
    cout << "Enter number " << endl;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
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
    
    return 0;
}