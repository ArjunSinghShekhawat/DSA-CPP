#include <iostream>
using namespace std;

double miles(int num)
{
    return num * 0.62137119;
}
int main()
{

    int num;
    cout << "Enter km data :" << endl;
    cin >> num;

    cout << num << " km  = " << miles(num) << " miles :" << endl;

    return 0;
}