#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int bs(vector<int> arr, int start, int target)
{
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int difference;

    cout<<"Enter dufference :"<<endl;
    cin>>difference;

    set<pair<int, int>> ans;

    int count = 0;

    sort(arr.begin(), arr.end());

    int i = 0;
    int j = i + 1;

    while (j < arr.size())
    {
        if (arr[j] - arr[i] == difference)
        {
            count++;
            i++;
            j++;
        }
        else if (arr[j] - arr[i] > difference)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << "ans :" << count << endl;
    //  //1 2 3 4 5
    // cout << "Enter the dufference :" << endl;
    // cin >> difference;
    // sort(arr.begin(), arr.end());

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (bs(arr, i + 1, arr[i] + difference) != -1)
    //     {
    //         ans.insert({arr[i], arr[i] + difference});
    //     }
    // }

    // for (pair<int, int> val : ans)
    // {

    //     cout << "(" << val.first << "," << val.second << ")" << endl;
    // }
    // cout << endl;

    return 0;
}