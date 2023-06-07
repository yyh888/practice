// 字符串交织
//class Solution {
//public:
//    bool isInterleave(string s1, string s2, string s3) {
//        if (s1.size() + s2.size() != s3.size()) return false;
//        s1 = " " + s1;
//        s2 = " " + s2;
//        s3 = " " + s3;
//        int n = s1.size(), m = s2.size();
//        vector<vector<bool>> dp(n, vector<bool>(m));
//        dp[0][0] = true;
//        for (int i = 1; i < n; i++)
//        {
//            if (s1[i] == s3[i]) dp[i][0] = true;
//            else break;
//        }
//        for (int j = 1; j < m; j++)
//        {
//            if (s2[j] == s3[j]) dp[0][j] = true;
//            else break;
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (s3[i + j] == s1[i])
//                {
//                    dp[i][j] = dp[i - 1][j];
//                }
//                if (s3[i + j] == s2[j] && !dp[i][j])
//                {
//                    dp[i][j] = dp[i][j - 1];
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


// 子序列的数目
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        s = " " + s;
//        t = " " + t;
//        int n = s.size(), m = t.size();
//        vector<vector<double>> dp(n, vector<double>(m));
//        for (int i = 0; i < n; i++) dp[i][0] = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (s[i] == t[j])
//                {
//                    dp[i][j] += dp[i - 1][j - 1];
//                }
//                dp[i][j] += dp[i - 1][j];
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


// 路径的数目
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        dp[1][1] = 1;
//        for (int i = 1; i <= m; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//        return dp[m][n];
//    }
//};