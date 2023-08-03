#include <iostream>
using namespace std;

int main()
{    int num;

    cout << "Enter the number :" << endl;
    cin >> num;
    // first part
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (i); j++)
        {
            cout << " ";
        }
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        for (int k = 0; k < (num - i); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // second part
    for (int i = 0; i < num; i++)
    {
        // star
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        // space part
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}