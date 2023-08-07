#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1{1, 2, 3, 4, 5};
    vector<int> arr2{4, 5, 6, 7, 3};
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                arr2[j] = INT32_MIN;
            }
        }
    }

    for (int i = 0; i < arr1.size(); i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        ans.push_back(arr2[i]);
    }

    cout << "Display the union  array element :" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != INT32_MIN)
        {
            cout << ans[i] << " ";
        }
    }
    cout << endl;

    return 0;
}