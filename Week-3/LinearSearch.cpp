#include <iostream>
using namespace std;

int linear_search(int arr[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int num[] = {1, 2, 3, 5, 7, 6, 8, 9, 10};
    int size = 9;

    int key;

    cout << "Enter Key :" << endl;
    cin >> key;

    cout << linear_search(num, key, size) << endl;

    return 0;
}