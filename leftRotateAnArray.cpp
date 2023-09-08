#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int position;

    cout << "Enter position :" << endl;
    cin >> position;

    int temp[arr.size()];
    int k = 0;

    for (int i = position; i < arr.size(); i++)
    {
        temp[k++] = arr[i];
    }
    for (int i = 0; i < position; i++)
    {
        temp[k++] = arr[i];
    }

    cout << "Print Array element :" << endl;
    for (auto value : temp)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}