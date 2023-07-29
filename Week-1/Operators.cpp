#include <iostream>
using namespace std;

int main()
{

    // arithmetic operator
    int num1 = 10;
    int num2 = 10;

    cout << (num1 + num2) << endl;
    cout << (num1 - num2) << endl;
    cout << (num1 * num2) << endl;
    cout << (num1 / num2) << endl;
    cout << (num1 % num2) << endl;

    cout << endl;
    // relational operator

    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;

    // logical operator

    int first = 90;
    int second = 100;

    cout << ((first > second) || (second > first)) << endl;
    cout << ((first > second) && (second > first)) << endl;
    cout << (!true) << endl;
}