#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2};

    cout << "Array Successfully created !" << endl;

    cout << "Address of arr " << arr << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int arr1[5] = {0};

    cout << "Print arr1 :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;



    return 0;
}