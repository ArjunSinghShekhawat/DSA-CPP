#include <bits/stdc++.h>
using namespace std;

int main()
{

    bool arr[10];

    memset(arr, 25, sizeof(arr));

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    char name[] = "arjun";

    memset(name, 'a', sizeof(name));

    cout << name << " " << endl;

    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str;

    return 0;
}