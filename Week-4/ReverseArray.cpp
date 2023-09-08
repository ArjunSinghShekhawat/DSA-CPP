#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reverse Number :" << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}