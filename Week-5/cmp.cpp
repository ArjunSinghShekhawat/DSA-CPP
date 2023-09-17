#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(char first, char second)
{
    return first > second;
}
int cmp1(int first, int second)
{
    return first > second;
}
int main()
{
    string name = "dcba";

    sort(name.begin(), name.end(), cmp);
    cout << name << " ";

    vector<int> arr{5, 3, 4, 7, 8};
    sort(arr.begin(), arr.end(), cmp1);

    cout << endl;
    for (auto value : arr)
    {
        cout << value << " ";
    }
    cout << endl;
}