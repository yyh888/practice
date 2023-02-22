// 递归
//class Solution {
//public:
//    int _PredictTheWinner(vector<int>& nums, int l, int r)
//    {
//        if (l > r) return 0;// 分差为0
//        int a = nums[l] - _PredictTheWinner(nums, l + 1, r);
//        int b = nums[r] - _PredictTheWinner(nums, l, r - 1);
//        return max(a, b);
//    }
//
//    bool PredictTheWinner(vector<int>& nums) {
//        return _PredictTheWinner(nums, 0, nums.size() - 1) >= 0;
//    }
//};

// 动态规划
//class Solution {
//public:
//    bool PredictTheWinner(vector<int>& nums) {
//        int n = nums.size();
//        int dp[n][n];
//        for (int i = 0; i < n; i++)
//        {
//            dp[i][i] = nums[i];
//        }
//        for (int i = n - 2; i >= 0; i--)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
//            }
//        }
//        return dp[0][n - 1] >= 0;
//    }
//};

// 一维化
//class Solution {
//public:
//    bool PredictTheWinner(vector<int>& nums) {
//        int n = nums.size();
//        int dp[n];
//        for (int i = 0; i < n; i++)
//        {
//            dp[i] = nums[i];
//        }
//        for (int i = n - 2; i >= 0; i--)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                dp[j] = max(nums[i] - dp[j], nums[j] - dp[j - 1]);
//            }
//        }
//        return dp[n - 1] >= 0;
//    }
//};