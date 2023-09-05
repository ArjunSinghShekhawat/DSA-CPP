#include <iostream>
#include <vector>
using namespace std;

// Time Complexity              = O(n^2)
// Best Case Time Complexity    = O(n)
// Average Case Time Complexity = O(n^2)
// Space Complexity             = O(1)

void bubbleSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < (arr.size() - i - 1); j++)
        {
            cout << "step " << j << "i " << i << endl;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
    }
}
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};

    bubbleSort(arr);

    cout << "Sorted Array :" << endl;

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}