#include <iostream>
using namespace std;

double c_to_f(int celsius)
{
    return (9.0/5)*celsius+32;
}
int main()
{
    int celsius;

    cout << "Enter celsius data :" << endl;
    cin >> celsius;

    cout << celsius << " to fohrenheit data " << c_to_f(celsius) << endl;

    return 0;
}