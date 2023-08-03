#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // star
        for (int star = 0; star < (i + 1); star++)
        {
            cout << "*";
        }
        // space
        for (int space = 0; space < (2 * num - 2 * i - 1); space++)
        {
            cout << " ";
        }
        // star
        for (int star = 0; star < (i + 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < num; i++)
    {
        // star
        for (int star = 0; star < (num - i); star++)
        {
            cout << "*";
        }
        // space
        for (int space = 0; space < (2 * i + 1); space++)
        {
            cout << " ";
        }
        // star
        for (int star = 0; star < (num - i); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}