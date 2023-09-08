#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> arr, int target)
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
        else if (arr[mid] < arr[mid + 1] && target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    vector<int> arr{4, 5, 6, 7, 0, 1, 2};

    cout << pivot(arr, 0) << endl;
}