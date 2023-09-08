#include <iostream>
using namespace std;

int main()
{

    // Operators
    // Arithmetic operator

    int num1 = 90;
    int num2 = 10;

    cout << (num1 + num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (12 % 5) << endl;

    // relational operator

    cout << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 != num2) << endl;

    // logical Operator
    cout << endl;
    cout << ((true > false) && (false > true)) << endl;
    cout << ((true > false) || (false > true)) << endl;
    cout << !(true) << endl
         << endl;
    

    // assignment operator

    int sum = 0;

    sum += num1;
    cout << sum << endl;

    sum*=num2;
    cout<<sum<<endl;

    sum/=num1;
    cout<<sum<<endl;

    return 0;
}