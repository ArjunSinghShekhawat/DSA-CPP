// sum of array
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1{100,2, 5, 4, 7, 6, 8, 9};
    vector<int> arr2{9, 7, 66, 54, 23, 54, 56,89};
    vector<int> ans;

    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int digit = arr1[i] + arr2[j] + carry;
        ans.push_back(digit % 10);
        carry = digit / 10;
        i--;
        j--;
    }
    // remaining part
    while (i >= 0)
    {
        int digit = arr1[i] + 0 + carry;
        ans.push_back(digit % 10);
        carry = digit / 10;
        i--;
    }
    while (j >= 0)
    {
        int digit = arr2[j] + 0 + carry;
        ans.push_back(digit % 10);
        carry = digit / 10;
        j--;
    }
    if (carry)
    {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());

    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}