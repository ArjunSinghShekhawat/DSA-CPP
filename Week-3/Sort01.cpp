#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0, 0,0,1,1,0,1};
    //vector<int> arr{1, 1, 1, 0};

    int start = 0;
    int end = arr.size() - 1;
    // int count = 1;
    while (start < end)
    {

        if (arr[start] == 0)
        {

            start++;
        }
        if (arr[end] == 1){

            end--;
    }
    if (start < end)
    {
        swap(arr[start], arr[end]);
    }
    // print(arr);
}

for (int i = 0; i < arr.size(); i++)
{
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}