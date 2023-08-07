#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arrA{2, 4, 7, 3, 8, 9, 1};
    vector<int> arrB{9, 0, 1, 7, 5};

    vector<int> ans;

    int i = arrA.size() - 1;
    int j = arrB.size() - 1;
    int carry = 0;

    // first part
    while (i >= 0 && j >= 0)
    {
        int num = arrA[i] + arrB[j] + carry;
        int value = num % 10;
        ans.push_back(value);
        carry = num / 10;
        i--;
        j--;
    }

    // second part
    while (i >= 0)
    {
        int num = arrA[i] + 0 + carry;
        int value = num % 10;
        ans.push_back(value);
        carry = num / 10;
        i--;
    }
    // third part

    while (j >= 0)
    {
        int num = arrB[j] + 0 + carry;
        int value = num % 10;
        ans.push_back(value);
        carry = num / 10;
        j--;
    }
    // carry
    while (carry)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    // pop
    while (ans[ans.size() - 1] == 0)
    {
        ans.pop_back();
    }

    // reverse ans

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}