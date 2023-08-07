#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //vector is a dynamic array
    // declare vector
    vector<int> arr;

    int size = (sizeof(arr) / sizeof(int));
    cout << size << endl;
    cout << arr.capacity() << endl;
    cout << arr.size() << endl;

    // initialize vector
    vector<int> brr(10);

    cout << brr.capacity() << endl;
    cout << brr.size() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    vector<int> crr(10, -1);

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;

    cout << "Enter the size of  vector:" << endl;
    int n;
    cin >> n;

    vector<int> drr(n, -101);

    for (int i = 0; i < drr.size(); i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;

    vector<int> err{1, 2, 3, 4, 5};

    for (int i = 0; i < err.size(); i++)
    {
        cout << err[i] << " ";
    }
    cout << endl;

    err.pop_back();

    for (int i = 0; i < err.size(); i++)
    {
        cout << err[i] << " ";
    }

    err.push_back(101);

    for (int i = 0; i < err.size(); i++)
    {
        cout << err[i] << " ";
    }
    cout << endl;

    cout << "Vector err empty or not :" << err.empty() << endl;
    vector<int> num;
    cout << "Vector num is empty or not :" << num.empty() << endl;

    cout << endl;
}