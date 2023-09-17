#include <iostream>
#include <string>

class Solution {
    bool check(std::string ans, char ch) {
        int end = ans.length() - 1;
        if (ans[end] == ch) {
            return true;
        }
        return false;
    }

public:
    std::string reorganizeString(std::string s) {
        std::string ans = "";
        ans.push_back(s[0]);
        int i = 1;
        int j = i + 1;
        while (j < s.length()) {
            if (s[i] == s[j]) {
                if (check(ans, s[j]) == false) {
                    ans.push_back(s[j]);
                    i++;
                } else {
                    // Find a different character for s[j]
                    char diffChar = s[i - 1];
                    while (i < s.length() && s[i] == diffChar) {
                        i++;
                    }
                    if (i == s.length()) {
                        return "";
                    }
                    ans.push_back(s[i]);
                }
                j++;
            } else {
                if (check(ans, s[j]) == false) {
                    ans.push_back(s[j]);
                }
                i++;
                j++;
            }
        }
        ans.push_back(s[i]);
        return ans;
    }
};

int main() {
    Solution solution;
    std::string s = "baaba";
    std::string result = solution.reorganizeString(s);
    if (result.empty()) {
        std::cout << "It's not possible to reorganize the string." << std::endl;
    } else {
        std::cout << "Reorganized string: " << result << std::endl;
    }
    return 0;
}
