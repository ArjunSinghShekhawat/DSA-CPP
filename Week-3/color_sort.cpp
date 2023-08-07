#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 0, 0, 1, 0, 2, 0, 1, 2, 2, 0, 2, 0, 2, 0, 2, 0, 2, 2, 0, 1, 1, 0, 0, 0, 0, 1};

    int low = 0;
    int midium = 0;
    int high = arr.size() - 1;

    while (midium <= high)
    {
        if (arr[midium] == 0)
        {
            swap(arr[low], arr[midium]);
            low++;
            midium++;
        }
        else if (arr[midium] == 1)
        {
            midium++;
        }
        else
        {
            swap(arr[midium], arr[high]);
            high--;
        }
    }

    // print sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

    // first way
    // Time complexcity = O(nlogn)
    // Space complexcity = O(n)

    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout<<"-------------------------------------------------------------------------"<<endl;

    // second way
    // counting print

    // Time complexcity = O(n)
    // Space complexcity = O(1)

    // int zero = 0;
    // int one = 0;
    // int two = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     if (arr[i] == 1)
    //     {
    //         one++;
    //     }
    //     if (arr[i] == 2)
    //     {
    //         two++;
    //     }
    // }

    // // print element
    // int i = 0;
    // while (zero > 0)
    // {
    //     arr[i] = 0;
    //     i++;
    //     zero--;
    // }
    // while (one > 0)
    // {
    //     arr[i] = 1;
    //     i++;
    //     one--;
    // }
    // while (two > 0)
    // {
    //     arr[i] = 2;
    //     i++;
    //     two--;
    // }

    // // print sorted array
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    cout << "----------------------------------------------------------------" << endl;
    
}