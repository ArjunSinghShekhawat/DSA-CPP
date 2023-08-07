#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // pair sum

    vector<int> arr1{1, 3, 5, 7};
    vector<int> arr2{2, 4, 6};

    int sum = 9;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element + arr2[j] == sum)
            {
                cout << "Pair sum will be = :"
                     << "(" << element << "," << arr2[j] << ")" << endl;
            }
        }
    }
    cout << endl;

    // second tarika ek array ke sath
    vector<int> num{1, 3, 5, 7, 2, 4, 6};
    int Sum = 9;

    for (int i = 0; i < num.size(); i++)
    {
        int element = num[i];
        for (int j = i + 1; j < num.size(); j++)
        {
            if (element + num[j] == Sum)
            {
                cout << "Pair sum will be = :"
                     << "(" << element << "," << num[j] << ")" << endl;
            }
        }
    }
    return 0;
}