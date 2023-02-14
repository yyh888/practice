class Solution {
public:
    int beautySum(string s) {
        int ret = 0;
        for (int i = 0; i < s.size(); i++)
        {
            vector<int> v(26);
            int Max = 0;
            for (int j = i; j < s.size(); j++)
            {
                v[s[j] - 'a']++;
                Max = max(Max, v[s[j] - 'a']);
                int Min = s.size();
                for (int k = 0; k < 26; k++)
                {
                    if (v[k])
                        Min = min(Min, v[k]);
                }
                ret += (Max - Min);
            }
        }
        return ret;
    }
};