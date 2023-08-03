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
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * i + 1); j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * num - 2 * i - 1); j++)
        {
            if (j == 0 || j == 2 * num - 2 * i - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}