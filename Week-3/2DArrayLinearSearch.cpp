#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
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

    if (linearSearch(arr, key))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present " << endl;
    }

    return 0;
}