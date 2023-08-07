#include <iostream>
using namespace std;

int max(int arr[][3])
{
    int maxi = INT32_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 51, 6},
        {7, 8, 9}};

        cout<<"The maximum element will be :"<<max(arr)<<endl;

    return 0;
}