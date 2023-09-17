#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char name[])
{
    int start = 0;
    int end = strlen(name) - 1;

    while (start < end)
    {
        if (name[start] != name[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    char ch[100];

    cout << "Enter the name:" << endl;
    cin.getline(ch, 50);

    if (checkPalindrome(ch))
    {
        cout << "Palindrome :" << endl;
    }
    else
    {
        cout << "Not Palindrome :" << endl;
    }

    return 0;
}