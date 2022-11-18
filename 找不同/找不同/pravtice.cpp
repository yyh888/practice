class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = { 0 };
        int ret[26] = { 0 };
        int n = s.size();
        char ans;
        for (int i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < n + 1; i++)
        {
            ret[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != ret[i])
            {
                ans = i + 'a';
                break;
            }
        }
        return ans;
    }
};