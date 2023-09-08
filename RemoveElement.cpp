#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int> &arr, int val)
{

    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != val)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}
int main()
{

    vector<int> arr = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int size = remove(arr, val);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}