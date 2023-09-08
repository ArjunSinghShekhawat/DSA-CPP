#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] == key)
        {
            return mid - 1;
        }
        if (mid + 1 <= end && arr[mid + 1] == key)
        {
            return mid + 1;
        }
        if (arr[mid] < key)
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
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};

    int ans = search(arr, 3);
    cout << "ans " << ans << endl;
    return 0;
}