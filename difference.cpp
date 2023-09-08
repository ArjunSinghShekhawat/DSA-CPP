#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDifference(vector<int> arr, int k)
{

    int i = 0;
    int j = i + 1;
    int count = 0;

    while (i < arr.size() && j < arr.size())
    {
        if (arr[j] - arr[i] == k)
        {
            count++;
            i++;
            j++;
        }
        else if (arr[j] - arr[i] > k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;

    sort(arr.begin(), arr.end());
    cout << "Count will be :" << countDifference(arr, k) << endl;

    return 0;
}