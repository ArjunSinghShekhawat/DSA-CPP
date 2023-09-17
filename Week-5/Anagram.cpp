#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";

    vector<int> freq_S(26, 0);
    vector<int> freq_T(26, 0);

    if (s.length() != t.length())
    {
        return false;
    }

    // Storing the frequency of each charaacter.
    for (int i = 0; i < s.length(); i++)
    {
        freq_S[s[i] - 'a']++;
        freq_T[t[i] - 'a']++;
    }
    cout << (freq_S == freq_T) << endl;
    // If both arrays are identical, the words are anagrams.
    vector<int> arr{1, 2, 30, 4, 5};
    vector<int> brr{1, 2, 3, 4, 5};
    cout << "Check " << (arr == brr) << endl;

    if (freq_S == freq_T)
    {
        return true;
    }

    // If both the arrays are not identical, the words are not anagrams.
    return false;
}
