#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    // using vector

    if (binary_search(arr.begin(), arr.end(), 11))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // using array
    int brr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(brr, brr + size, 66))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}