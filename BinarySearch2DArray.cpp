#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[3][3], int target)
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

        if (arr[rowIndex][colIndex] == target)
        {
            return mid;
        }
        else if (arr[rowIndex][colIndex] < target)
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
    int key;

    cout << "Enter key :" << endl;
    cin >> key;

    cout<<binarySearch(arr,key);
    return 0;
}