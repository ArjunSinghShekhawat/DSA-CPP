#include<iostream>
using namespace std;

int main()
{
    char ch[10] = "babber";
    char *ptr = ch;

    cout<<ch<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    char *ch1 = "arjun";
    cout<<*ch1<<endl;
    return 0;
}