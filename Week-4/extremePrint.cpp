#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {

        cout << arr[start] << " " << arr[end] << " ";
        start++;
        end--;
    }

    return 0;
}