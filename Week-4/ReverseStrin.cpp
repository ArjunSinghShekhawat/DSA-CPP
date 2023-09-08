#include <iostream>
#include <string>
#include <vector>
using namespace std;


void Reverse(string &s, int start, int end)
{

    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main()
{
    string s = "i.like.this.program.very.much";

    int start = 0;
    int end = 0;
    while (end < s.length())
    {
        while (end < s.length() && s[end] != '.')
        {
            end++;
        }
        int end1 = end;
        Reverse(s, start, end - 1);

        start = end1 + 1;
        end = start;
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}