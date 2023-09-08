#include <iostream>
#include <vector>
using namespace std;

int last_occurence(vector<int> arr, int target)
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
    vector<int> arr{12, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 9, 20};

    int target;
    cout << "Enter the target value :" << endl;
    cin >> target;

    cout << "The target value" << target << "present in an array last occurence will be :" << last_occurence(arr, target) << endl;

    return 0;
}