#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int searchKey)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == searchKey)
        {
            return mid;
        }
        else if (arr[mid] < searchKey)
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
    vector<int> arr{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int searchKey;

    cout << "Enter search Key :" << endl;
    cin >> searchKey;

    int ans = binarySearch(arr, searchKey);

    if (binarySearch(arr, searchKey) != -1)
    {
        cout << "The search Key " << searchKey << " present at " << ans << " index :" << endl;
    }
    return 0;
}