class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string tmp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ') tmp += s[i];
            else
            {
                v.push_back(tmp);
                tmp = "";
            }
        }
        v.push_back(tmp);
        if (v.size() != pattern.size()) return false;
        unordered_map<char, string> hash1;
        unordered_map<string, char> hash2;
        for (int i = 0; i < pattern.size(); i++)
        {
            if (hash2.count(v[i]) && hash1[pattern[i]] != v[i]) return false;
            if (hash1.count(pattern[i]) && hash2[v[i]] != pattern[i]) return false;
            hash1[pattern[i]] = v[i];
            hash2[v[i]] = pattern[i];
        }
        return true;
    }
};