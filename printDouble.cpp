#include <iostream>
using namespace std;

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};

    cout << "Print double " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << 2 * arr1[i] << " ";
    }
    cout << endl;

    return 0;
}