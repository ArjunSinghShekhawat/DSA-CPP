#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    string name = "azxxzy";
    string ans = "";

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ans[ans.length() - 1])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(name[i]);
        }
    }
    cout << "Remaning String will be :" << endl;
    cout << "String : " << ans << endl;
    return 0;
}