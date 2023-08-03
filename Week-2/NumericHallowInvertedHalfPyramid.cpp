#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    int count = 1;
    for (int i = 0; i < num; i++)
    {

        count = 1;
        count = count + i;
        for (int j = 0; j < (num - i); j++)
        {
            if (i == 0 || i == (num - 1) || j == 0 || j == (num - i - 1))
            {
                cout << count << " ";
            }
            else
            {
                cout << "  ";
            }
            count++;
        }
        cout << endl;
    }
    return 0;
}