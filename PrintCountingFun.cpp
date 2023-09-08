#include <iostream>
using namespace std;

void printCount(int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{

    int count;

    cout << "Enter count :" << endl;
    cin >> count;

    printCount(count);

    return 0;
}