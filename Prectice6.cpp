#include <iostream>
#include <vector>
using namespace std;

int peekValue(vector<int> arr)
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
    vector<int> arr{1,3,5,7,9,6,4,2,0,-12,-54,-76};

    cout << "Peek value :" << peekValue(arr) << endl;

    return 0;
}