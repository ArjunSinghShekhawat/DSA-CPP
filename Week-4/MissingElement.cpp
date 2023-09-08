#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 5, 3, 4};

    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        if (arr[index - 1] < 0)
        {
            cout << index - 1 << " " << endl;
        }
        arr[index - 1] *= -1;
    }
    return 0;
}