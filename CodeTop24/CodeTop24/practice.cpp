// 圆圈中最后剩下的数字
//class Solution {
//public:
//    int lastRemaining(int n, int m) {
//        deque<int> dq;
//        for (int i = 0; i < n; i++)
//        {
//            dq.push_back(i);
//        }
//        while (dq.size() > 1)
//        {
//            for (int i = 0; i < m - 1; i++)
//            {
//                int ret = dq.front();
//                dq.pop_front();
//                dq.push_back(ret);
//            }
//            dq.pop_front();
//        }
//        return dq.front();
//    }
//};


// 爬楼梯
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(int n, int cur)
//    {
//        if (cur > n) return;
//        if (n == cur)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        tmp.push_back(cur + 1);
//        dfs(n, cur + 1);
//        tmp.pop_back();
//        tmp.push_back(cur + 2);
//        dfs(n, cur + 2);
//        tmp.pop_back();
//    }
//
//    int climbStairs(int n) {
//        dfs(n, 0);
//        return res.size();
//    }
//};


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