#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> arr{2, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    vector<int> arr{1,2,3,4,5};

    int k = 4;
    int x = 3;
    int low = 0;
    int high = arr.size() - 1;

    while (high - low >= k)
    {
        if (x - arr[low] > arr[high] - x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    cout << "Array :" << endl;
    for (int i = low; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}