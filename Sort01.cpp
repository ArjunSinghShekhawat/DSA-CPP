#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> arr{0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    // vector<int> arr{0,1,0};
    vector<int> arr{1,0,1,1,0};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }
    cout << "Sort array :" << endl;

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}