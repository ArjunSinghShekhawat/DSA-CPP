#include <iostream>
using namespace std;

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
    }
    cout << "Print array element :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}