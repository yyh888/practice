// 礼物的最大价值
//class Solution {
//public:
//    int maxValue(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        for (int i = 1; i < n; i++)
//        {
//            grid[i][0] += grid[i - 1][0];
//        }
//        for (int j = 1; j < m; j++)
//        {
//            grid[0][j] += grid[0][j - 1];
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
//            }
//        }
//        return grid[n - 1][m - 1];
//    }
//};


//class Solution {
//public:
//    int maxValue(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
//            }
//        }
//        return dp[n][m];
//    }
//};


// 下降路径最小和
//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> dp(matrix);
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                int left = INT_MAX, mid = INT_MAX, right = INT_MAX;
//                if (j > 0)
//                {
//                    left = dp[i - 1][j - 1];
//                }
//                mid = dp[i - 1][j];
//                if (j < n - 1)
//                {
//                    right = dp[i - 1][j + 1];
//                }
//                dp[i][j] = min(left, min(mid, right)) + matrix[i][j];
//            }
//        }
//        int ret = INT_MAX;
//        for (int j = 0; j < m; j++)
//        {
//            ret = min(ret, dp[n - 1][j]);
//        }
//        return ret;
//    }
//};


//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 2, INT_MAX));
//        for (int j = 0; j < m + 2; j++)
//        {
//            dp[0][j] = 0;
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i - 1][j + 1])) + matrix[i - 1][j - 1];
//            }
//        }
//        int ret = INT_MAX;
//        for (int i = 1; i <= m; i++)
//        {
//            ret = min(ret, dp[n][i]);
//        }
//        return ret;
//    }
//};


// 最小路径和
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
//        dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i - 1][j - 1];
//            }
//        }
//        return dp[n][m];
//    }
//};


// 地下城游戏
//class Solution {
//public:
//    int calculateMinimumHP(vector<vector<int>>& dungeon) {
//        int n = dungeon.size(), m = dungeon[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
//        dp[n][m - 1] = dp[n - 1][m] = 1;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = m - 1; j >= 0; j--)
//            {
//                dp[i][j] = min(dp[i][j + 1], dp[i + 1][j]) - dungeon[i][j];
//                if (dp[i][j] <= 0) dp[i][j] = 1;
//            }
//        }
//        return dp[0][0];
//    }
//};


// 按摩师
//class Solution {
//public:
//    int massage(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0) return 0;
//        if (n == 1) return nums[0];
//        vector<int> dp(n + 1);
//        dp[1] = nums[0];
//        for (int i = 2; i <= n; i++)
//        {
//            if (dp[i - 1] > dp[i - 2] + nums[i - 1])
//            {
//                dp[i] = dp[i - 1];
//            }
//            else
//            {
//                dp[i] = dp[i - 2] + nums[i - 1];
//            }
//        }
//        return dp[n];
//    }
//};


//class Solution {
//public:
//    int massage(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0) return 0;
//        if (n == 1) return nums[0];
//        vector<int> dp(n + 1);
//        dp[1] = nums[0];
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = max(dp[i - 2] + nums[i - 1], dp[i - 1]);
//        }
//        return dp[n];
//    }
//};

//打家劫舍 II
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0) return 0;
//        if (n == 1) return nums[0];
//        vector<int> dp1(n + 1);
//        vector<int> dp2(n + 1);
//        // 选第一个
//        dp1[1] = nums[0];
//        for (int i = 2; i < n; i++)
//        {
//            dp1[i] = max(dp1[i - 2] + nums[i - 1], dp1[i - 1]);
//        }
//        // 选第二个
//        dp2[2] = nums[1];
//        for (int i = 3; i <= n; i++)
//        {
//            dp2[i] = max(dp2[i - 2] + nums[i - 1], dp2[i - 1]);
//        }
//        return dp1[n - 1] > dp2[n] ? dp1[n - 1] : dp2[n];
//    }
//};


//删除并获得点数
//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums) {
//        int n = INT_MIN;
//        int Min = INT_MAX;
//        for (auto& e : nums)
//        {
//            n = max(n, e);
//            Min = min(Min, e);
//        }
//        vector<int> a(n + 1);
//        for (int i = 0; i < nums.size(); i++)
//        {
//            a[nums[i]]++;
//        }
//        vector<int> dp(n + 1);
//        dp[Min] = a[Min] * Min;
//        for (int i = 2; i <= n; i++)
//        {
//            dp[i] = max(dp[i - 1], dp[i - 2] + i * a[i]);
//        }
//        return dp[n];
//    }
//};