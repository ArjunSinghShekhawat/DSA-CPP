#include <iostream>
using namespace std;

void counting(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "Arjun Singh Shekhawat !" << endl;
    }
}
int main()
{

    int num;

    cout << "Enter number :" << endl;
    cin >> num;

    counting(num);

        return 0;
}