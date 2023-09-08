#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int key;
    cout << "Enter the key :" << endl;
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    cout << "Display the array element :" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}