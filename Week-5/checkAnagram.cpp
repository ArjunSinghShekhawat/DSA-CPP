#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> sortedStrs = strs; // Create a copy of strs to store sorted strings
        
        for (string& s : sortedStrs) {
            sort(s.begin(), s.end()); // Sort each string
        }
        
        vector<bool> added(strs.size(), false); // To keep track of which strings are added to ans
        
        for (int i = 0; i < strs.size(); i++) {
            if (!added[i]) {
                vector<string> group;
                group.push_back(strs[i]);
                added[i] = true;
                
                for (int j = i + 1; j < strs.size(); j++) {
                    if (sortedStrs[i] == sortedStrs[j]) {
                        group.push_back(strs[j]);
                        added[j] = true;
                    }
                }
                
                ans.push_back(group);
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);
    
    for (const vector<string>& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}
