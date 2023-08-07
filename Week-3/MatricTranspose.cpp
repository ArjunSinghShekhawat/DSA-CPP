#include <iostream>
using namespace std;
void transpose(int arr[][3], int transposeArray[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeArray[i][j] = arr[j][i];
        }
    }
}
void print(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transposeArray[3][3];
    cout << "Before " << endl;
    print(arr);
    transpose(arr, transposeArray);
    cout << "After" << endl;
    print(transposeArray);

    return 0;
}