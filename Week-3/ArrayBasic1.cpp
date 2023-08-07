#include <iostream>
using namespace std;

int main()
{

    // Array -> Array is a linear data structure and it is continuous memory allocation and store similar types of data element.

    // declare of an array
    int arr[5];
    char ch[5];
    float marks[10];

    // initialize of an array
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    // print array
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << vowel[i] << " ";
    }
    cout << endl;

    // input array

    int info[5];

    cout << "Enter the info data:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> info[i];
    }
    cout << "Display the info data" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << info[i] << " ";
    }
    cout << endl;

    // initialize all array by 0
    int a[5] = {0};

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // initialize by 1

    for (int i = 0; i < 5; i++)
    {
        info[i] = 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << info[i] << " ";
    }
    cout << endl;

    return 0;
}