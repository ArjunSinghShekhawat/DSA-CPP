#include <iostream>
#include <string.h>
using namespace std;

int getLength(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}
void printName(char name[])
{
    for (int i = 0; i < getLength(name); i++)
    {
        cout << name[i] << "";
    }
    cout << endl;
}
void removeSpace(char name[])
{
    int start = 0;
    int end = getLength(name) - 1;

    for (int i = 0; i < getLength(name); i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
    printName(name);
}
int main()
{
    char ch[100];

    cout << "Enter paragraph :" << endl;
    cin.getline(ch, 50);

    removeSpace(ch);

    return 0;
}