#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start <= end)
    {
        if (s[start] != s[end])
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
    string name = "abc";
    int ans = 0;
    for (int i = 0; i < name.length(); i++)
    {
        int count = 0;
        for (int j = i; j < name.length(); j++)
        {
            string subStr = name.substr(i, count + 1);
            count++;
            if (checkPalindrome(subStr))
            {
                ans++;
            }
        }
    }
    cout << "Answer will be :" << ans << endl;
    return 0;
}