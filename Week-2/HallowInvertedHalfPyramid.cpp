#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            if (i == 0 || i == (num - 1) || j == 0 || j == (num - i - 1))
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