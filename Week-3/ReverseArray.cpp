#include <iostream>
using namespace std;

int main()
{

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // reverse an array
    int size = 9;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = num[i];
        num[i] = num[size - i - 1];
        num[size - i - 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}