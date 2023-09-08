#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter the size :" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the arrayelement :" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Print array element :" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout<<"arr[0] at value :"<<arr[0]<<endl;

      cout<<"arr[1] at value :"<<arr[1]<<endl;

    return 0;
}