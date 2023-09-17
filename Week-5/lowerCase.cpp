#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<char> lowerCase(char name[])
{
    vector<char> ans;

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            ans.push_back(name[i]);
        }
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            ans.push_back(name[i]);
        }
        else
        {
            int ans1 = name[i] - 'A' + 'a';
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

    vector<char> ans = lowerCase(name);
    for (auto value : ans)
    {
        cout << value;
    }
    cout << endl;

    return 0;
}