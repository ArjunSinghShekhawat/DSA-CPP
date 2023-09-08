#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    // for (int i = 0; i < num; i++)
    // {
    //     if (i == 3)
    //     {
            
    //         break;
    //     }
    //     cout<<i<<" ";
    // }

     for (int i = 0; i < num; i++)
    {
        if (i == 3)
        {
            
            continue;
        }
        cout<<i<<" ";
    }
    cout << endl;
    return 0;
}