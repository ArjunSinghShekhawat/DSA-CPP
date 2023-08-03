#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    char ch = 'A';

    for (int i = 0; i < num; i++)
    {

        int j;
        for (j = 0; j < (i + 1); j++)
        {
            cout << char(64+j+1) << " ";
        }
        j = j - 1;
        for (; j >= 1; j--)
        {
            cout << char(64+j) << " ";
        }

        cout << endl;
    }
    return 0;
}