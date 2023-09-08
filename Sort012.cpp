#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> arr{1, 2, 1, 2, 0, 0, 0, 1, 2, 0, 1, 2, 2, 2, 1, 0, 0, 1, 2, 1, 0, 1, 2, 1, 0, 1, 0, 1, 2, 1, 2, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 2};
    vector<int> arr{2,0,1};
    int low = 0;
    int mid = 0;
    int end = arr.size() - 1;

    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

    cout << "Display sorted array :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}