#include <iostream>
using namespace std;

int *update(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return b;
}
int *update1(int *arr)
{
    return arr;
}
void up(int *p)
{
    p = p + 1;
}
int main()
{

    int a = 10;
    int b = 20;

    cout << "&a :" << &a << endl;
    cout << "&b :" << &b << endl;

    update(&a, &b);

    cout << " a :" << a << endl;
    cout << " b : " << b << endl;

    cout << update(&a, &b) << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "arr value :" << arr << endl;
    cout << "Address at arr :" << update1(arr);

    int num = 90;
    int *q = &num;

    cout << "Before :" << endl;
    cout << num << endl;
    cout << q << endl;
    cout << *q << endl;

    up(q);

    cout << "After :" << endl;
    cout << num << endl;
    cout << q << endl;
    cout << *q << endl;

    return 0;
}