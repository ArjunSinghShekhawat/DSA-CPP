#include <iostream>
using namespace std;

int main()
{

    int n = 8;
    int arr[8] = {-8, 9, 5, 10, 2, 6, -7, 7};
    int temp[n];
    int count;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}