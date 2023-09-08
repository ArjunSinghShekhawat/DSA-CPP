#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int k = 3;
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
    for (int i = low; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}