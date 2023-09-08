#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int index;
    cout << "Enter the index at on the isert value :" << endl;
    cin >> index;

    int element;
    cout << "Enter the value insert in an array :" << endl;
    cin >> element;

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}