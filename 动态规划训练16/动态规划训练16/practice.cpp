// 组合总和 Ⅳ
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


// 不同的二叉搜索树
//class Solution {
//public:
//    int numTrees(int n) {
//        vector<int> dp(n + 1);
//        dp[0] = 1;
//        dp[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                dp[i] += dp[j - 1] * dp[i - j];
//            }
//        }
//        return dp[n];
//    }
//};

// 不同的平均值数目
//class Solution {
//public:
//    int distinctAverages(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        int i = 0, j = n - 1;
//        unordered_set<double> st;
//        while (i < j)
//        {
//            st.insert((nums[i] + nums[j]) / 2.0);
//            i++;
//            j--;
//        }
//        return st.size();
//    }
//};


// 爬楼梯的最少成本
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n = cost.size();
//        vector<int> dp(n + 1);
//        dp[1] = cost[0];
//        dp[2] = cost[1];
//        for (int i = 3; i <= n; i++)
//        {
//            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1];
//        }
//        return min(dp[n - 1], dp[n]);
//    }
//};