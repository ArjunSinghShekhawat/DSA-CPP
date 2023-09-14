#include <iostream>
using namespace std;

void solve(int arr[])
{
    cout << "arr :" << arr << endl;
    cout << "&arr :" << &arr << endl;

    arr[0] = 900;
}
int main()
{
    // array with pointer

    int arr[10] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // similar
    cout << "arr :" << arr << endl;
    cout << "&arr :" << &arr << endl;
    cout << "&arr[0] :" << &arr[0] << endl;

    cout << endl;

    cout << "ptr :" << ptr << endl;
    cout << "&ptr :" << &ptr << endl;
    cout << "*ptr :" << *ptr << endl;

    int *qtr = arr + 2;

    cout << "*qtr :" << *qtr << endl;

    // arr = arr+2; invalid statement i am not change the base address of arr in symbol table

    cout << "(*arr+4) :" << (*arr + 4) << endl;
    cout << "Sizeof qtr = " << sizeof(qtr) << endl;
    cout << "Sizeof qtr = " << sizeof(*qtr) << endl;

    // char array
    char ch[10] = "arjunsing";
    char *chPtr = ch;

    cout << "ch :" << ch << endl;
    cout << "chPtr :" << chPtr << endl;
    cout << "chptr+2 :" << (chPtr + 2) << endl;
    cout << " chPtr+8 :" << (chPtr + 8) << endl;
    cout << "ch+2 " << ch + 2 << endl;

    cout << "*chptr " << *chPtr << endl;
    cout << "*(chptr+3) " << *(chPtr + 2) << endl;

    cout << "sizeof :" << sizeof(chPtr) << endl;

    // char *temp = "arjun";//bad prectice
    // cout << temp << endl;

    char abc = 'a';
    char *aPtr = &abc;
    cout << abc << endl;
    cout << aPtr << endl;

    int arr1[4] = {10, 20, 30, 40};
    int *arr1Ptr = arr1;

    cout << "arr1 " << arr1 << endl;

    solve(arr1Ptr);

    return 0;
}