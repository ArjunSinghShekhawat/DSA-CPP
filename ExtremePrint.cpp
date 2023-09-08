#include <iostream>
using namespace std;

void extrmePrint(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }
}
int main()
{

    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    extrmePrint(arr, size);

    return 0;
}