// 通配符匹配
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int n = s.size(), m = p.size();
//        vector<vector<bool>> dp(n, vector<bool>(m));
//        dp[0][0] = true;
//        for (int j = 1; j < m; j++)
//        {
//            if (p[j] == '*')
//            {
//                dp[0][j] = true;
//            }
//            else break;
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if ((p[j] == '?' && dp[i - 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                }
//                else if (s[i] == p[j] && dp[i - 1][j - 1])
//                {
//                    dp[i][j] = true;
//                }
//                else if (p[j] == '*')
//                {
//                    for (int k = 0; k <= i; k++)
//                    {
//                        if (dp[i - k][j - 1])
//                        {
//                            dp[i][j] = true;
//                            break;
//                        }
//                    }
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};

// 正则表达式匹配
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        s = " " + s;
//        p = " " + p;
//        int n = s.size(), m = p.size();
//        vector<vector<bool>> dp(n, vector<bool>(m));
//        dp[0][0] = true;
//        for (int j = 2; j < m; j += 2)
//        {
//            if (p[j] == '*')
//            {
//                dp[0][j] = true;
//            }
//            else break;
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (p[j] == '*')
//                {
//                    //dp[i][j] = dp[i][j - 2] || (p[j - 1] == '.' || p[j - 1] == s[i]) && dp[i - 1][j];
//                    if (p[j - 1] == '.')
//                    {
//                        dp[i][j] = dp[i][j - 2] || dp[i - 1][j];
//                    }
//                    else
//                    {
//                        dp[i][j] = dp[i][j - 2] || (s[i] == p[j - 1] && dp[i - 1][j]);
//                    }
//                }
//                else
//                {
//                    dp[i][j] = dp[i - 1][j - 1] && (p[j] == '.' || s[i] == p[j]);
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};