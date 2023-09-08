#include <iostream>
#include <vector>
using namespace std;

int peak_index(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    vector<int> arr{0,1,2,4,10,5,2,1};

    cout << "The peak index value will be :" << peak_index(arr) << endl;


    return 0;
}