#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{2,4,6,8,10,12,14};
    int k = 4;
    int x = 10;

    int low = 0;
    int high = arr.size() - 1;

    while (high - low >= k)
    {
        if (x - arr[low] > arr[high] - x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
   cout<<"Total element :"<<high-low+1<<endl;
    for (int i = low; i < high+1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}