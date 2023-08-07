#include <iostream>
using namespace std;

int main()
{

    // array declare
    int arr[5];

    cout << arr << endl;
    cout << &arr << endl;

    int arr0[53];
    char arr1[106];
    bool arr2[23];

    // array initialize
    int marks[5] = {2, 4, 7, 6, 9};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    int number[10] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;

    char ch[10] = {'a', 'b', 'c'};
    cout << ch[0] << endl;

    // input
    int num1[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> num1[i];
    }
    cout << "Print The array element :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;


    int first[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        cout<<2*first[i]<<" ";
    }
    
    return 0;
}