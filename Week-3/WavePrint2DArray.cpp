#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 4;
    int col = 4;

    int arr[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int start_row = 0;
    int start_col = 0;

    int end_row = row - 1;
    int end_col = col - 1;

    for (int i = start_col; i <= end_col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= end_col; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = end_col; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}