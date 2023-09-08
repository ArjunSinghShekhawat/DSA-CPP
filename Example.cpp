#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int> &arr)
{
    int j = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}
int main()
{
    vector<int> arr{1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5};

    int size = remove(arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
