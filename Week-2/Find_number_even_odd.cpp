#include <iostream>
using namespace std;
void find_number(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even number :" << endl;
    }
    else
    {
        cout << "Odd number :" << endl;
    }
}
int main()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    find_number(num);

    return 0;
}