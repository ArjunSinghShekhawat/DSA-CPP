#include <iostream>
using namespace std;

int main()
{

    int num[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int size = 10;

    // extreme print

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << num[start] << " ";
        }
        else
        {
            cout << num[start] << " " << num[end] << " ";
        }
        start++;
        end--;
    }

    return 0;
}