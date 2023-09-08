#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter number :" << endl;
    cin >> num;

    // print counting
    for (int i = 0; i < num; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // print table
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << " ";
    }
    cout << endl;

    // print arjun num time
    for (int i = 0; i < num; i++)
    {
        cout << "Arjun Singh" << endl;
    }

    // print reverse counting
    for (int i = 5; i > 0; i--)
    {
        cout << i << " ";
    }

    for (int i = 1; i < num; i = i * 2)
    {
        cout << i << " ";
    }

    for (int i = num; i > 0; i = i / 2)
    {
        cout << i << " ";
    }

    int i = 1;

    for (;;)
    {
        if (i < num)
        {
            cout << i << " ";
            i++;
        }
    }
    cout << endl;
    return 0;
}