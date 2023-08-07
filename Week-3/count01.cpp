#include <iostream>
using namespace std;

int main()
{
    int num[] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int size = 20;

    int zero = 0;
    int one = 1;

    for (int i = 0; i < size; i++)
    {
        if (num[i] == 0)
        {
            zero++;
        }
        if (num[i] == 1)
        {
            one++;
        }
    }
    cout << "Zero :" << zero << endl;
    cout << "One  :" << one << endl;

    return 0;
}