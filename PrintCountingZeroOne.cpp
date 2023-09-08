#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1};

    int zero = 0;
    int one = 0;

    for (int i = 0; i < 21; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
    }
    cout << "Counting zero will be :" << zero << endl;
    cout << "Counting one will be  :" << one << endl;

    return 0;
}