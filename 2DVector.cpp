#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(5, vector<int>(5, 4));

    for (auto data : arr)
    {
        for (auto value : data)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}