#include <iostream>
using namespace std;

int max(int arr[], int size)
{

    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    cout<<"Maximum number will be "<<max(arr, size)<<endl;
    return 0;
}