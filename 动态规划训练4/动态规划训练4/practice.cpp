// 买卖股票的最佳时机 III
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, -0x3f3f3f3f));
//        vector<vector<int>> g(n, vector<int>(3, -0x3f3f3f3f));
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//        return max(g[n - 1][0], max(g[n - 1][1], g[n - 1][2]));
//    }
//};


// 买卖股票的最佳时机 IV
//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(k + 1, -0x3f3f3f3f));
//        vector<vector<int>> g(n, vector<int>(k + 1, -0x3f3f3f3f));
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j <= k; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j - 1 >= 0)
//                {
//                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//        int ret = -0x3f3f3f3f;
//        for (int j = 0; j <= k; j++)
//        {
//            ret = max(ret, g[n - 1][j]);
//        }
//        return ret;
//    }
//};


// 最大子数组和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        dp[0] = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};


// 环形子数组的最大和
//class Solution {
//public:
//    int maxSubarraySumCircular(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1);// 最大
//        vector<int> g(n + 1);// 最小
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//        }
//        f[0] = g[0] = nums[0];
//        int retf = nums[0];
//        int retg = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = max(f[i - 1] + nums[i], nums[i]);
//            retf = max(retf, f[i]);
//            g[i] = min(g[i - 1] + nums[i], nums[i]);
//            retg = min(retg, g[i]);
//        }
//        if (sum == retg) return retf;
//        return max(retf, sum - retg);
//    }
//};