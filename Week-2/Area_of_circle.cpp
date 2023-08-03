#include <iostream>
using namespace std;

float Area_circle(int radius)
{
    float  area = 2 * 3.14 * radius;
    return area;
}
int main()
{
    int radius;

    cout << "Enter the radius of circle :" << endl;
    cin >> radius;

    cout << "The area of circle is :" << Area_circle(radius) << endl;
    return 0;
}