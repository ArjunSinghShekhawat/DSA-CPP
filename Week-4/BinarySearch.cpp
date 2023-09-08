#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> arr, int element)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == element)
        {
            return true;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<int> arr{2, 4, 6, 8, 10, 12, 14, 16, 18, 10};
    int element;

    cout << "Enter target element :" << endl;
    cin >> element;

    if (binarySearch(arr, element))
    {
        cout << "Element " << element << " present in the array :" << endl;
    }
    else
    {
        cout << "Element not present :" << endl;
    }

    return 0;
}