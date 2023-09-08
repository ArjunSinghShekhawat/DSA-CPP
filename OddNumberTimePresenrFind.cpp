#include <iostream>
#include <vector>
using namespace std;

int odd_time_number(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // when in an array present 1 element so that start == end
        if (start == end)
        {
            return start;
        }

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{-1, 2, 2, 3, 3, 4, 4, 3,3, 600, 600, 4, 4,2,2,1,1,5,5,7,7,100,100};

    cout << "In an array odd time present element will be :" << odd_time_number(arr) << " :" << endl;
    cout<<"Value will be :"<<arr[odd_time_number(arr)]<<" :"<<endl;

    return 0;
}