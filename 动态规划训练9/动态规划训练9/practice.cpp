// 最长回文子序列
//class Solution {
//public:
//    int longestPalindromeSubseq(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (i == j)
//                {
//                    dp[i][j] = 1;
//                }
//                else
//                {
//                    if (s[i] == s[j])
//                    {
//                        if (j - i > 1)
//                        {
//                            dp[i][j] = dp[i + 1][j - 1] + 2;
//                        }
//                        else
//                        {
//                            dp[i][j] = 2;
//                        }
//                    }
//                    else
//                    {
//                        if (j - i > 1)
//                        {
//                            dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
//                        }
//                        else
//                        {
//                            dp[i][j] = 1;
//                        }
//                    }
//                }
//            }
//        }
//        return dp[0][n - 1];
//    }
//};


// 让字符串成为回文串的最少插入次数
//class Solution {
//public:
//    int minInsertions(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if (s[i] == s[j])
//                {
//                    dp[i][j] = dp[i + 1][j - 1];
//                }
//                else
//                {
//                    dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//                }
//            }
//        }
//        return dp[0][n - 1];
//    }
//};

