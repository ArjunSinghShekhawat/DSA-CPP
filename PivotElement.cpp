#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (start == end)
        {
            return start;
        }

        if (mid - 1 >= start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (mid + 1 <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int bs(vector<int> arr, int start, int end, int target)
{
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
    vector<int> arr{8, 9, 10, 2, 4, 6};
    // vector<int> arr{2, 4, 6, 8, 10};
 

    int pivotIndex = pivotElement(arr);
    int target;

    cout << "Enter target :" << endl;
    cin >> target;

    if (target >= arr[0] && target <= arr[pivotIndex])
    {
        cout << "Found at Index :" << bs(arr, 0, pivotIndex, target) << endl;
    }
    else
    {
        cout << "Found at Index :" << bs(arr, pivotIndex + 1, arr.size() - 1, target) << endl;
    }
    return 0;
}