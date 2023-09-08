#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int size;

    cout << "Enter size :" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter array element :" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Print array element :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int key;

    cout << "Enter searching key :" << endl;
    cin >> key;

    if (linearSearch(arr, size, key))
    {
        cout << "Your searching key " << key << " present is an array :" << endl;
    }
    else
    {
        cout << "Your searching key " << key << " is not present in  an array :" << endl;
    }
    return 0;
}