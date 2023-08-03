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
        for (int j = 0; j < (i+1); j++)
        {
            cout << count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}