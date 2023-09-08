#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int target)
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
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return mid + 1;
}
int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 2;
    cout << search(arr, target) << endl;

    return 0;
}