#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 4, 2, 2};

    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index] < 0)
        {
            cout << index << endl;
        }
        arr[index] *= -1;
    }
    return 0;
}