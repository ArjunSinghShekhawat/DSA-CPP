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
            cout <<"*"<<" ";
        }
        // star
        for (int j = 0; j < (2 * i + 1); j++)
        {
            
                cout<<i+1<<" ";
            
            
        }
        // space
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout <<"*"<<" ";
        }
        cout << endl;
    }
    return 0;
}