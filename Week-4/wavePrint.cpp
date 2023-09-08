#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int row = 4;
    int col = 4;

    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            // even
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            // odd
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}