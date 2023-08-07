#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2,5, 3, 4, 3, 5, 6};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                cout << i + 1;
                exit(0);
            }
        }
    }

    return 0;
}