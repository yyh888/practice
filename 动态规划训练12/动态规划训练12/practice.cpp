// 交错字符串
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
//                if (s3[i + j] == s1[i] && dp[i - 1][j])
//                {
//                    dp[i][j] = true;
//                }
//                if (s3[i + j] == s2[j] && dp[i][j - 1])
//                {
//                    dp[i][j] = true;
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


// 两个字符串的最小ASCII删除和
//class Solution {
//public:
//    int minimumDeleteSum(string s1, string s2) {
//        s1 = " " + s1;
//        s2 = " " + s2;
//        int n = s1.size(), m = s2.size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (s1[i] == s2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + s1[i];
//                }
//                dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
//            }
//        }
//        int ret = 0;
//        for (int i = 1; i < n; i++)
//        {
//            ret += s1[i];
//        }
//        for (int i = 1; i < m; i++)
//        {
//            ret += s2[i];
//        }
//        return ret - 2 * dp[n - 1][m - 1];
//    }
//};


// 最长重复子数组
//class Solution {
//public:
//    int findLength(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size(), m = nums2.size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        int Max = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                if (nums1[i - 1] == nums2[j - 1])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                    Max = max(Max, dp[i][j]);
//                }
//            }
//        }
//        return Max;
//    }
//};