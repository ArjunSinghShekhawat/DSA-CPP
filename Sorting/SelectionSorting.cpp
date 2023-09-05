#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity              - O(n^2)
// Best Case Time Complexity    - O(n^2)
// Average Case Time Complexity - O(n^2)
// Space Complexity             - O(1)

void selectionSort(vector<int> &arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};

    selectionSort(arr);

    cout << "Sorted array :" << endl;

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}