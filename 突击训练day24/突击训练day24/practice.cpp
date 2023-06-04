// 房屋偷盗
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1);
//        dp[1] = nums[0];
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
//        }
//        return dp[n];
//    }
//};


// 环形房屋偷盗
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n + 1), g(n + 1);
//        if (n == 0) return 0;
//        if (n == 1) return nums[0];
//        f[1] = nums[0];
//        for (int i = 2; i < n; i++)
//        {
//            f[i] = max(f[i - 1], f[i - 2] + nums[i - 1]);
//        }
//        g[2] = nums[1];
//        for (int i = 3; i <= n; i++)
//        {
//            g[i] = max(g[i - 1], g[i - 2] + nums[i - 1]);
//        }
//        return max(f[n - 1], g[n]);
//    }
//};


// 将字符串翻转到单调递增
//class Solution {
//public:
//    int minFlipsMonoIncr(string s) {
//        int n = s.size();
//        vector<vector<int>> dp(n + 1, vector<int>(2));
//        dp[1][0] = s[0] == '1', dp[1][1] = s[0] == '0';
//        for (int i = 2; i <= n; i++)
//        {
//            if (s[i - 1] == '1')
//            {
//                dp[i][0] = dp[i - 1][0] + 1;
//                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]);
//            }
//            else
//            {
//                dp[i][0] = dp[i - 1][0];
//                dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + 1;
//            }
//        }
//        return min(dp[n][0], dp[n][1]);
//    }
//};


