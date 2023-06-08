// 最小路径之和
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0x3f3f3f3f));
//        dp[0][1] = dp[1][0] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                dp[i][j] = grid[i - 1][j - 1] + min(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//        return dp[n][m];
//    }
//};


// 三角形中最小路径之和
//class Solution {
//public:
//    int minimumTotal(vector<vector<int>>& triangle) {
//        int n = triangle.size(), m = triangle[n - 1].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0x3f3f3f3f));
//        dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= triangle[i - 1].size(); j++)
//            {
//                dp[i][j] = triangle[i - 1][j - 1] + min(dp[i - 1][j - 1], dp[i - 1][j]);
//            }
//        }
//        int ans = 0x3f3f3f3f;
//        for (int j = 0; j <= m; j++)
//        {
//            ans = min(ans, dp[n][j]);
//        }
//        return ans;
//    }
//};


// 分割等和子集
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        int n = nums.size();
//        for (auto& e : nums)
//        {
//            sum += e;
//        }
//        if (sum % 2) return false;
//        sum /= 2;
//        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
//        for (int i = 0; i <= n; i++) dp[i][0] = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= sum; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1] && !dp[i][j]) dp[i][j] = dp[i - 1][j - nums[i - 1]];
//            }
//        }
//        return dp[n][sum];
//    }
//};


//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        int n = nums.size();
//        for (auto& e : nums)
//        {
//            sum += e;
//        }
//        if (sum % 2) return false;
//        sum /= 2;
//        vector<bool> dp(sum + 1);
//        dp[0] = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = sum; j >= 0; j--)
//            {
//                if (j >= nums[i - 1] && !dp[j]) dp[j] = dp[j - nums[i - 1]];
//            }
//        }
//        return dp[sum];
//    }
//};