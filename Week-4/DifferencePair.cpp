#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int start, int target)
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
    // vector<int> arr{1, 3, 4, 1, 5};
    vector<int> arr{1,1,1,1,1,1};
    int k = 0;

    set<pair<int, int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        if (binarySearch(arr, i + 1, arr[i] + k) != -1)
        {
            ans.insert({arr[i],arr[i]+k});
        }
    }
    cout<<"Size :"<<ans.size()<<endl;
    return 0;
}