#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, -4, -3, -65, -8, 3, 4, 6, 0, -34};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] >= 0)
        {
            start++;
        }
        else if (arr[end] < 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}