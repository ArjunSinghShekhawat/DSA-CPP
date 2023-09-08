#include <iostream>
#include <vector>
using namespace std;

int peak_element(vector<int> arr)
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
    return arr[start];
}
int main()
{

    vector<int> arr{1,2,1,3,5,6,4};

    cout << peak_element(arr) << " " << endl;

    return 0;
}