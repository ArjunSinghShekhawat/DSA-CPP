#include <iostream>
#include <vector>
using namespace std;

//Time Complexity              = O(n^2)
//Best Case Time Complexity    = O(n)
//Average Case Time Complexity = O(n^2)
//Space Complexity             = O(1)

void insertionSort(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        int val = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }
}
int main()
{
    vector<int> arr{10, 1, 7, 6, 14, 9};

    cout << "Sorted array :" << endl;
    insertionSort(arr);

    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}