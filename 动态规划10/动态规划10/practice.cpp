// 最长公共子序列
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        text1 = " " + text1;
//        text2 = " " + text2;
//        int n = text1.size(), m = text2.size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (text1[i] == text2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};

// 不相交的线
//class Solution {
//public:
//    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//        nums1.insert(nums1.begin(), 0);
//        nums2.insert(nums2.begin(), 0);
//        int n = nums1.size(), m = nums2.size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (nums1[i] == nums2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};

// 不同的子序列
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        s = " " + s;
//        t = " " + t;
//        int n = t.size(), m = s.size();
//        vector<vector<double>> dp(n, vector<double>(m));
//        for (int j = 0; j < m; j++) dp[0][j] = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (t[i] == s[j])
//                {
//                    dp[i][j] += dp[i - 1][j - 1];
//                }
//                dp[i][j] += dp[i][j - 1];
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};