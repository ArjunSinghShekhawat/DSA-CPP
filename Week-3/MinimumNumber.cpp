#include <iostream>
using namespace std;

int min(int num[], int size)
{
    int mini = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (mini > num[i])
        {
            mini = num[i];
        }
    }
    return mini;
}
int main()
{

    int num[10] = {1, 2, 3, 4, -5, 6, 7, 8, 91, 10};
    int size = 10;

    cout << "Minimum number :" << min(num, size) << endl;
    return 0;
}