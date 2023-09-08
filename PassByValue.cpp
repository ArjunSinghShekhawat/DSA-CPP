#include <iostream>
using namespace std;

void printAddress(int num)
{
    cout << "PrintAddress memory num address :" << &num << endl;
}
int main()
{
    int num = 5;

    cout << "Main memory num address :" << &num << endl;

    printAddress(num);
    return 0;
}