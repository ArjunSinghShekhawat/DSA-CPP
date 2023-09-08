#include <iostream>
using namespace std;

float c_to_f(int c)
{
    return (((9.0 / 5.0) * float(c)) + 32.0);
}
int main()
{

    int c;

    cout << "Enter celcius data :" << endl;
    cin >> c;

    cout << "Forenihait :" << c_to_f(c) << endl;
    return 0;
}