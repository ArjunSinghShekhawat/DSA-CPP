#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number :" << endl;
    cin >> num;

    int count;

    for (int i = 0; i < num; i++)
    {
        count = 1;
        for (int j = 0; j < (num - i); j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}