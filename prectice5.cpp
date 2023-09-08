#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastOccurrence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end -start) / 2;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}
int main()
{
    // first last and total occurrence
    vector<int> arr{2, 4, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 12, 14, 16, 18, 18, 18, 18, 18, 18, 20, 22, 24, 26, 28, 30};
    int key;

    cout << "Enter key :" << endl;
    cin >> key;

    cout << "First Occurrence :" << firstOccurrence(arr, key) << endl;
    cout << "Last Occurrence  :" << lastOccurrence(arr, key) << endl;
    cout << "Total Occurrence :" << lastOccurrence(arr, key) - firstOccurrence(arr, key) + 1 << endl;

    return 0;
}