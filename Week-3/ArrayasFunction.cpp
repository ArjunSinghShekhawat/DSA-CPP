#include <iostream>
using namespace std;

void change(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 1;
    }
    cout << endl;
}
int main()
{

    int num[5] = {1, 2, 3, 4, 5};

    cout << "Before change :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    change(num, 5);

    cout << "After change :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}