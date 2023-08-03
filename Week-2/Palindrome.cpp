#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;
    int reverse = 0;
    int num1 = num;
    while (num1 > 0)
    {
        int digit = num1 % 10;
        reverse = reverse * 10 + digit;
        num1 = num1/10;

    }
    if (reverse==num){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}