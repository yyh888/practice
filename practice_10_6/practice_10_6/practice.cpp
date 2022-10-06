class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        int sz = strs.size();
        for (int i = 0; i < n; i++)
        {
            char ch = strs[0][i];
            for (int j = 0; j < sz; j++)
            {
                if (i >= strs[j].size() || strs[j][i] != ch)
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0);
    }
};

// 2
class Solution {
public:
    string Common(const string& s1, const string& s2)
    {
        int n = min(s1.size(), s2.size());
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                return s1.substr(0, i);
            }
        }
        return s1.substr(0, n);
    }

    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        string PreString = strs[0];
        for (int i = 0; i < sz - 1; i++)
        {
            PreString = Common(PreString, strs[i + 1]);
        }
        return PreString;
    }
};

// 3
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());//≈≈–Ú
        string start = strs.front(), end = strs.back();
        int n = min(start.size(), end.size());
        for (int i = 0; i < n; i++)
        {
            if (start[i] != end[i])
            {
                return start.substr(0, i);
            }
        }
        return start.substr(0);
    }
};