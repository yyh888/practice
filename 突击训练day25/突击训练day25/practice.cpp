// 最长斐波那契数列
//class Solution {
//public:
//    int lenLongestFibSubseq(vector<int>& arr) {
//        unordered_map<int, int> hash;
//        int n = arr.size();
//        for (int i = 0; i < n; i++)
//        {
//            hash.insert({ arr[i], i });
//        }
//        vector<vector<int>> dp(n, vector<int>(n, 2));
//        int ans = 0;
//        for (int i = 2; i < n; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                if (hash.count(arr[i] - arr[j]))
//                {
//                    int a = hash[arr[i] - arr[j]];
//                    if (a < j)
//                    {
//                        dp[i][j] = max(dp[i][j], dp[j][a] + 1);
//                        ans = max(ans, dp[i][j]);
//                    }
//                }
//            }
//        }
//        return ans;
//    }
//};


// 最少回文分割
//class Solution {
//public:
//    int minCut(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                }
//            }
//        }
//        vector<int> f(n, 0x3f3f3f3f);
//        for (int i = 0; i < n; i++)
//        {
//            if (dp[0][i])
//            {
//                f[i] = 0;
//            }
//            for (int j = 1; j <= i; j++)
//            {
//                if (dp[j][i])
//                {
//                    f[i] = min(f[i], f[j - 1] + 1);
//                }
//            }
//        }
//        return f[n - 1];
//    }
//};


// 最长公共子序列
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        int n = text1.size(), m = text2.size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                if (text1[i - 1] == text2[j - 1])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        return dp[n][m];
//    }
//};


