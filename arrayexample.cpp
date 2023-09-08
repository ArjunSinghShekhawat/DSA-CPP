#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> strs{"flower", "flowt", "flight"};

    string ans = "";

    for (int i = 0; i < strs.size() - 1; i++)
    {

        int len1 = strs[i].size();
        int len2 = strs[i + 1].size();

        int j = 0;

        while (j < len1 && j < len2)
        {

            if (strs[i][j] == strs[i + 1][j] && j < len1 && j < len2)
            {
                ans.push_back(strs[i][j]);
            }
            else{
                break;
            }
            j++;
        }

        strs[i + 1] = ans;

        if (i < strs.size() - 2)
        {
            ans.erase();
        }
    }
    cout << "\nans " << ans << endl;
}