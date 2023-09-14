#include <iostream>
using namespace std;

void solve(int arr[])
{
    cout << "arr" << arr << endl;
    cout << "&arr" << &arr << endl;

    arr[0] = 900;
}
void solve1(int *p)
{
    cout << "Address of p" << p << endl;
    cout << "Address of &p " << &p << endl;
    *p = *p + 10;
}
void update(int *a, int *b)
{
    *a = 100;
    *b = 200;
}
int main()
{

    int arr[10] = {11, 22, 33, 44, 55};

    cout << "Before function calling :" << endl;
    cout << "arr  " << arr << endl;
    cout << "&arr  " << &arr << endl;

    cout << "After function call :" << endl;
    solve(arr);

    int a = 5;
    int *qtr = &a;

    cout << "Address of &a :" << &a << endl;
    cout << "Address og qtr :" << qtr << endl;

    solve1(qtr);
    cout << "The value of a :" << a << endl;

    int number[4] = {10, 20, 30, 40};

    int *first = &number[0];
    int *second = &number[2];

    update(first, second);

    for (int i = 0; i < 4; i++)
    {
        cout << i[number] << " ";
    }
    cout << endl;

    return 0;
}