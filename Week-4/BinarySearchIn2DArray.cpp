#include <iostream>
using namespace std;

// Time Complexity = O(log(n))
// Space Complexity = O(1)

int binarySearch(int arr[3][3], int key)
{
    int row = 3;
    int col = 3;

    int total_element = row * col;

    int start = 0;
    int end = total_element - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (arr[rowIndex][colIndex] == key)
        {
            return mid;
        }
        else if (arr[rowIndex][colIndex] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int key = 3;

    cout << "Index will be " << binarySearch(arr, key);
    return 0;
}