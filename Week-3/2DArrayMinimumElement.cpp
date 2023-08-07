#include <iostream>
using namespace std;

int min(int arr[][3])
{
    int mini = INT32_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mini > arr[i][j])
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}
int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 51, 6},
        {7, -8, 9}};

    cout << "The minimum element will be :" << min(arr) << endl;

    return 0;
}