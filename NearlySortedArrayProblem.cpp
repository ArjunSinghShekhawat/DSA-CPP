#include <iostream>
#include <vector>
using namespace std;

int nearlySorted(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 > arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    return -1;
}
int main()
{
    // Nearly sorted array
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target;

    cout << "Enter the target :" << endl;
    cin >> target;

    cout << "Your searching element " << target << " present in an array at " << nearlySorted(arr, target) << " index :" << endl;
    return 0;
}