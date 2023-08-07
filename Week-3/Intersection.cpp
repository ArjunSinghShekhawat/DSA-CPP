#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    // Intersection

    vector<int> arr1{1, 2, 3, 3, 4, 5, 6};
    vector<int> arr2{3, 4, 5, 6, 3};
    vector<int> ans;

    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2.size(); j++)
        {
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT32_MIN;
            }
        }
    }

    cout << "Display intersection :" << endl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}