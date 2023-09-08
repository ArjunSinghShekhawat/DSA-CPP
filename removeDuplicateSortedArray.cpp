#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != INT32_MIN)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int remove_duplicate(vector<int> &arr)
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
    // print(arr);
}
int main()
{

    vector<int> arr{1, 1, 2};

    cout << "Size before :" << arr.size() << endl;
    remove_duplicate(arr);
    cout << "Size after :" << arr.size() << endl;


    return 0;
}