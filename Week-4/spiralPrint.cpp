// spiral print
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int row = 3;
    int col = 4;

    int total_element = row * col;
    int count = 0;

    int sRow = 0;
    int eRow = 2;
    int sCol = 0;
    int eCol = 3;

    while (count < total_element)
    {
        // step : 1
        for (int i = sCol; i <= eCol && count < total_element; i++)
        {
            cout << arr[sRow][i] << " ";
            count++;
        }
        sRow++;

        // step : 2
        for (int i = sRow; i <= eRow && count < total_element; i++)
        {
            cout << arr[i][eCol] << " ";
            count++;
        }
        eCol--;

        // step - 3
        for (int i = eCol; i >= sCol && count < total_element; i--)
        {
            cout << arr[eRow][i] << " ";
            count++;
        }
        eRow--;

        // step - 4
        for (int i = eRow; i >= sRow && count < total_element; i--)
        {
            cout << arr[i][sCol] << " ";
            count++;
        }
        sCol++;
    }

    return 0;
}