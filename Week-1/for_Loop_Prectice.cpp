#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 10; i = i * 2)
    {
        cout << i << endl;
    }

    cout << endl;

    for (int i = 1; i < 10; i = i + 2)
    {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 100; i > 0; i = i / 2)
    {
        cout << i << endl;
    }

    cout<<endl;

    for(int i=5;(i>=0 && i<=10);i++){
        cout<<i<<endl;
    }
    return 0;
}