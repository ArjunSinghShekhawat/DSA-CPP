#include <iostream>
#include <vector>
using namespace std;

int missing_element(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start + 1;
}
int main()
{
    vector<int> arr{1, 2,3, 4, 5,6,7, 8, 9,10,11,13};

    cout << "Missing element will be :" << missing_element(arr) << endl;

    return 0;
}