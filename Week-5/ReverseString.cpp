#include <iostream>
#include <string.h>
using namespace std;

int getLength(char num[])
{
    int i = 0;
    while (num[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char ch[100];

    cout << "Enter name :" << endl;
    cin.getline(ch, 50);

    // reverse string
    int start = 0;
    int end = getLength(ch) - 1;

    while (start < end)
    {
        int temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        start++;
        end--;
    }

    cout << "After reverse operation :" << endl;

    for (int i = 0; i < getLength(ch); i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;

    return 0;
}