#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr{1, 3, 4, 5, 9, 2, 6, 8, 7, 9};

    // first way
    // time complexity - O(n^2)
    // space complexcity - O(1)

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << arr[i] << endl;
    //             exit(0);
    //         }
    //     }
    // }

    // second way
    // time complexcity - O(nlon(n))
    // space complexcity - O(n)

    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size() - 1; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }

    // third way
    // time complexity - O(n)
    // space complexity - O(1)

    // int ans = -1;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int index = abs(arr[i]);
    //     if (arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     arr[index] *= -1;
    // }
    // cout << ans << endl;

    // fourth way
    // time complexity - O(n)
    // space complexity - O(1)
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0] << endl;

    return 0;
}