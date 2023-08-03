#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << "  ";
        }
        int j;
        for (j = 0; j < (i + 1); j++)
        {
            cout << j + 1 << " ";
        }
        j = j - 1;
        for (; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}