class Solution {
public:
    int secondHighest(string s) {
        int ans = -1, max = -1;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                if (s[i] - '0' > max)
                {
                    ans = max;
                    max = s[i] - '0';
                    continue;
                }
                if (s[i] - '0' != max && s[i] - '0' > ans)
                {
                    ans = s[i] - '0';
                }
            }
        }
        return ans;
    }
};