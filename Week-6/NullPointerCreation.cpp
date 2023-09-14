#include <iostream>
using namespace std;

int main()
{

    // int *ptr;

    // //segmentation fault -->bad prectice
    // cout << *ptr << endl;

    int *ptr = nullptr;
    //good prectice
    cout << ptr << endl;
    return 0;
}