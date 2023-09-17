#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,char> M;
    M[0] = 'a';
    M[1] = 'b';

    cout<<M[1];
    return 0;
}