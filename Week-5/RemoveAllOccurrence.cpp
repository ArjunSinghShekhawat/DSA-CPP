#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "daabcbaabcbc";
    string part = "abc";
    string ans = "";

    for (int i = 0; i < name.length(); i++)
    {
        ans.push_back(name[i]);
        if(ans.find(part) != string::npos)
        {
            int index = ans.find(part);
            ans.replace(index, part.length(), "");
        }
    }
    cout << "String " << ans << endl;

    return 0;
}
