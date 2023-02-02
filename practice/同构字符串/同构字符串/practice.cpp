#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> hash1;
        unordered_map<char, char> hash2;
        for (int i = 0; i < s.size(); i++)
        {
            if ((hash1.count(s[i]) && hash1[s[i]] != t[i]) || (hash2.count(t[i]) && hash2[t[i]] != s[i])) return false;
            hash1[s[i]] = t[i];
            hash2[t[i]] = s[i];
        }
        return true;
    }
};