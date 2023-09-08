#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastOccurence(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}
int main()
{

    vector<int> arr{2, 4, 5, 5, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9, 10};
    int key;

    cout << "Enter the key element :" << endl;
    cin >> key;

    cout << "The first occurence will be :" << firstOccurence(arr, key) << endl;

    cout << "The last occurence will be :" << lastOccurence(arr, key) << endl;
    
    cout << "Total occurence will be :" << lastOccurence(arr, key) - firstOccurence(arr, key) + 1 << endl;
    return 0;
}