#include <iostream>
using namespace std;

int update(int *a)
{

    *a = *a + 1000;
}
int *up()
{
    int data = 100;
    int *ptr = &data;

    return ptr;
}
void up1(int *arr)
{
    *(arr + 2) = 1000;
    *(arr + 1) = 3000;
}
int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Value of a :" << a << endl;
    cout << "Value of *ptr :" << *(ptr) << endl;
    cout << "Value of &a :" << &a << endl;
    cout << "Address of a :" << ptr << endl;
    cout << "Address of ptr :" << &ptr << endl;

    cout << endl;

    cout << *(ptr) / 2 << endl;
    cout << *(ptr) + 10 << endl;

    cout << endl;

    // double pointer
    int num = 10;
    int *p = &num;
    int **q = &p;

    cout << "num :" << num << endl;
    cout << "num :" << *p << endl;
    cout << "num :" << **q << endl;

    cout << "Address :" << endl;

    cout << "address num :" << &num << endl;
    cout << "address num :" << p << endl;
    cout << "address num :" << *q << endl;

    // char pointer
    char ch[10] = "arjun";
    char *chp = ch;

    cout << "ch " << ch << endl;
    cout << "ch " << chp << endl;

    // array pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int *w = arr + 1;

    cout << arr << endl;
    cout << w << endl;

    // pointer function
    int x = 900;

    update(&x);

    cout << "Value of x :" << x << endl;

    // function return pointer
    int *y = up();

    cout << "Value of y :" << *y << endl;

    int arr1[5] = {1, 2, 3, 4, 5};
    up1(arr1);

    for (auto val : arr1)
    {
        cout << val << " ";
    }

    return 0;
}