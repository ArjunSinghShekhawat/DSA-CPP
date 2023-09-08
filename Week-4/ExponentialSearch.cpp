#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity = O(log(2^logm-1))
// Space Complexity = O(1)

int bs(vector<int> arr, int start, int end, int key)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
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
int exponentialSearch(vector<int> arr, int key)
{
    int n;
    n = arr.size() - 1;

    if (arr[0] == key)
    {
        return 0;
    }

    int i = 1;
    while (i < arr.size() && arr[i] <= key)
    {
        i *= 2;
    }
    return bs(arr, i / 2, min(n - 1, i), key);
}
int main()
{
    vector<int> arr{2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int key = 12;

    int ans = exponentialSearch(arr, key);

    cout << ans << endl;
    cout << arr[ans] << endl;
    return 0;
}