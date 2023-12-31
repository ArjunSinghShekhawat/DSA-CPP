#include <iostream>
#include <vector>
#include<set>
using namespace std;

int main()
{
    // vector<int> arr1{1, 2, 3, 4, 5, 6};
    // vector<int> arr2{4, 5, 6, 7, 8, 9, 10};
    // vector<int> arr3{-12, -43, -65, 0, 1, 3, 5, 6};

     vector<int> arr1{3,3,3,3,3,3,3};
    vector<int> arr2{3,3,3,3,3,3,3,3,3,3};
    vector<int> arr3{3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
    set<int> ans;

    int j = 0;
    int i = 0;
    int k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {

            ans.insert(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}