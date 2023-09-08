#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{6, 7, 8, 9, 10};

    int sum = 10;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] + brr[j] == sum)
            {
                cout << "Pair Sum (" << arr[i] << "," << brr[j] << ") :" << endl;
            }
        }
    }

    return 0;
}