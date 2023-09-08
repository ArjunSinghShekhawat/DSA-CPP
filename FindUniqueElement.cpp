#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 5, 4, 3, 1};

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }
    cout << "Unique element will be :" << ans << endl;
    return 0;
}