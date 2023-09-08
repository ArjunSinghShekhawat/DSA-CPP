#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{7, 6, 4, 3, 1};
    int mini = arr[0];
    int maxprofit = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        int currPro = arr[i] - mini;
        maxprofit = max(currPro, maxprofit);
        mini = min(mini, arr[i]);
    }
    cout << maxprofit << endl;

    return 0;
}