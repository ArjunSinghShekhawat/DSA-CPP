#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0};
    int zero = 0;
    int one = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    cout << "Zero will be :" << zero << endl;
    cout << "One will be  :" << one << endl;
    return 0;
}