#include <iostream>
using namespace std;

int minimumValue(int arr[], int size)
{
    int mini = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}
int main()
{

    int arr[10] = {1, 9, 8, 2, 5, -3, 7, 6, 4, 0};
    int size = 10;

    cout << "Minimum value in an array will be :" << minimumValue(arr, size) << endl;
    return 0;
}