#include <iostream>
using namespace std;

int main()
{
    // declare

    int arr1[2][2];

    // initialization

    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // input

    int arr3[2][3];

    cout << "Enter the array element :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr3[i][j];
        }
    }
    //output

    cout << "Display the array element :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    cout<<arr3[1][1]<<" ";
    
    return 0;
}