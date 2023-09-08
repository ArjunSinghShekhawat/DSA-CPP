#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60};
    int key = 16;

    int i = 0;
    int index = -1;

    while (true)
    {
        if (arr[i] > key)
        {
            break;
        }
        if (arr[i] == key)
        {
            index = i;
        }
        i++;
    }
    cout << index << endl;
    return 0;
}