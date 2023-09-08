#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 100;
    arr[1] = arr[1] + 101;

    printArray(arr, size);
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    inc(arr, size);

    return 0;
}