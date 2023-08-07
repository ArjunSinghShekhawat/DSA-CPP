#include <iostream>
using namespace std;

void update(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
    cout << endl;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Before updation :" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    update(arr, 10);
    cout << "After Updateion :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}