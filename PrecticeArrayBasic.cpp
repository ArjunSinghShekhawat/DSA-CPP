#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // declare array
    int arr[5];

    // Take input

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // display output
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> arr;
    vector<int> brr(5, -3);

    int arr1[3][3];
    vector<vector<int>> arr4(5, vector<int>(4, -5));

    for (auto data : arr4)
    {
        for (auto value : data)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}