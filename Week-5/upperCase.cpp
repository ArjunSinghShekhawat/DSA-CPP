#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void print(char name[])
{
    for (int i = 0; i < strlen(name); i++)
    {
        cout << name[i] << " ";
    }
}
vector<char> upperCase(char name[])
{
    vector<char> ans;

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            ans.push_back(name[i]);
        }
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            ans.push_back(name[i]);
        }
        else
        {
            int ans1 = name[i] - 'a' + 'A';
            ans.push_back(char(ans1));
        }
    }
    return ans;
}
int main()
{
    char name[100];

    cout << "Enter name :" << endl;
    cin.getline(name, 50);

    upperCase(name);

    vector<char> ans;
    ans = upperCase(name);

    for (auto val : ans)
    {
        cout << val;
    }
    cout << endl;

    return 0;
}