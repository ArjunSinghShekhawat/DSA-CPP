#include <iostream>
using namespace std;

int max(int num[], int size)
{

    int maxi = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (num[i] > maxi)
        {
            maxi = num[i];
        }
    }
    return maxi;
}
int main()
{

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 91, 10};
    int size = 10;

    cout << "Maximum number will be :" << max(num, size) << endl;

    return 0;
}