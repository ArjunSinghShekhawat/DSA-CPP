#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Number:" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int space = 0; space <(i); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < (num-i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}