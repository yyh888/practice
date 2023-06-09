// 加减的目标值
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        for (auto& e : nums)
//        {
//            sum += e;
//        }
//        int a = (target + sum) / 2;
//        if ((target + sum) % 2) return 0;
//        int n = nums.size();
//        vector<vector<int>> dp(n + 1, vector<int>(a + 1));
//        dp[0][0] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= a; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1])
//                {
//                    dp[i][j] += dp[i - 1][j - nums[i - 1]];
//                }
//            }
//        }
//        return dp[n][a];
//    }
//};

// 最少的硬币数目
//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<int> dp(amount + 1);
//        for (int j = 1; j <= amount; j++) dp[j] = 0x3f3f3f3f;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= amount; j++)
//            {
//                if (j >= coins[i - 1] && dp[j - coins[i - 1]] != 0x3f3f3f3f) dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//            }
//        }
//        return dp[amount] == 0x3f3f3f3f ? -1 : dp[amount];
//    }
//};


// 排列的数目
//class Solution {
//public:
//    int combinationSum4(vector<int>& nums, int target) {
//        int n = nums.size();
//        vector<double> dp(target + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= target; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i >= nums[j]) dp[i] += dp[i - nums[j]];
//            }
//        }
//        return dp[target];
//    }
//};