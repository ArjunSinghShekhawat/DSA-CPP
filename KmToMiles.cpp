#include <iostream>
using namespace std;

double kmToMiles(int km)
{
    return (km * 0.621371);
}
int main()
{

    int km;

    cout << "Enter km value :" << endl;
    cin >> km;

    cout << "The " << km << " KM "
         << " will be Miles will be :" << kmToMiles(km) << endl;

    return 0;
}