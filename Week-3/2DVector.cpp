#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declare
    vector<vector<int>> arr;

    // initialization
    vector<vector<int>> arr1(3, vector<int>(4, 12));

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[i].size(); j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> a{1, 2, 3, 4};
    vector<int> b{5, 6, 7, 8};
    vector<int> c{1, 2, 3};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    arr.pop_back();

    for (int i = 0; arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}