#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> arr{1, 2, -3, 4, -5,0, 6, -11, 21, -1, -111,-12,222,21,-1111,-222,-333};
    vector<int> arr{-1, -2, -3, -4};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    cout << "Sorted Array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    // first way

    // Time complexcity - O(n^2)
    // Space complexity - O(1)

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }
    // cout << "Sort" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // second way

    // Time complexcity - O(nlog(n))
    // space complexcity - O(n)

    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // third way
    // time complexity - O(n)
    // space complexcity - O(1)
}