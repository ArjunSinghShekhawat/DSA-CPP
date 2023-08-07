#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Find Unique Element

    int size;
    cout << "Enter the size of of vector" << endl;
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the vector element :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << "Display the element :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // unique element in a vector
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }
    cout << "The unique element in vector will be :" << ans << endl;

    return 0;
}