#include <iostream>
#include <vector>
using namespace std;

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
    if (arr[0] == key)
    {
        return 0;
    }

    int i = 1;
    while (i < arr.size() && arr[i] <= key)
    {
        i = i * 2;
    }
    int size = arr.size() - 1;
    return bs(arr, i / 2, min(i, size), key);
}
//Time Complexity = O(log(2^logm-1))
//Spacw Complexity = O(1)

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int key;

    cout << "Enter searching key element :" << endl;
    cin >> key;

    if (exponentialSearch(arr, key) != -1)
    {
        cout << "Searching key " << key << " Present in an array at " << exponentialSearch(arr, key) << " index" << endl;
    }
    return 0;
}