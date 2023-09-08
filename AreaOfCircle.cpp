#include <iostream>
using namespace std;

double areaCircle(double radius)
{
    return (2 * 3.14 * radius);
}
int main()
{

    double radius;

    cout << "Enter radius :" << endl;
    cin >> radius;

    cout << "Circle Area will be :" << areaCircle(radius) << endl;

    return 0;
}