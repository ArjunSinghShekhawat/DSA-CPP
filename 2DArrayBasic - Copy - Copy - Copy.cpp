#include <iostream>
using namespace std;

int main()
{

    int arr[2][2] = {
        {1, 2},
        {3, 4}};

    // cout << "Dispaly the array element :" << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arr1[3][3];

    cout << "Enter the array element :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Display the array element :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}