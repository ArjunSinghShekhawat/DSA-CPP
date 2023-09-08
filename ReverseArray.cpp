#include <iostream>
using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    int start = 0;
    int end = size - 1;

    for (int i = 0; i < size / 2; i++)
    {
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];
        start++;
        end--;
    }
    print(arr, size);
    return 0;
}