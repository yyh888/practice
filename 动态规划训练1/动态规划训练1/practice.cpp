// 第 N 个泰波那契数
//class Solution {
//public:
//    int tribonacci(int n) {
//        if (n < 3)
//        {
//            return n == 0 ? 0 : 1;
//        }
//        vector<int> dp(n + 1);
//        dp[0] = 0;
//        dp[1] = 1;
//        dp[2] = 1;
//        for (int i = 3; i <= n; i++)
//        {
//            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
//        }
//        return dp[n];
//    }
//};


// 三步问题
//class Solution {
//public:
//    const int N = 1000000007;
//
//    int waysToStep(int n) {
//        if (n < 3)
//        {
//            if (n == 1) return 1;
//            return n == 2 ? 2 : 4;
//        }
//        vector<long long> dp(n + 2);
//        dp[1] = 1;
//        dp[2] = 2;
//        dp[3] = 4;
//        for (int i = 4; i <= n; i++)
//        {
//            dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % N;
//        }
//        return dp[n];
//    }
//};


// 使用最小花费爬楼梯
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n = cost.size();
//        for (int i = 2; i < n; i++)
//        {
//            cost[i] += min(cost[i - 1], cost[i - 2]);
//        }
//        return min(cost[n - 1], cost[n - 2]);
//    }
//};


// 解码方法
//class Solution {
//public:
//    int numDecodings(string s) {
//        int n = s.size();
//        vector<int> dp(n);
//        if (n == 1) return s[0] == '0' ? 0 : 1;
//        // 初始化
//        if (s[0] == '0')
//        {
//            return 0;
//        }
//        dp[0] = 1;
//        // 单独
//        if (s[1] != '0')
//        {
//            dp[1] += 1;
//        }
//        // 前一个
//        int ret = (s[0] - '0') * 10 + (s[1] - '0');
//        if (ret >= 10 && ret <= 26)
//        {
//            dp[1] += 1;
//        }
//        for (int i = 2; i < n; i++)
//        {
//            if (s[i] != '0')
//            {
//                dp[i] += dp[i - 1];
//            }
//            int ret = (s[i - 1] - '0') * 10 + (s[i] - '0');
//            if (ret >= 10 && ret <= 26)
//            {
//                dp[i] += dp[i - 2];
//            }
//        }
//        return dp[n - 1];
//    }
//};


//class Solution {
//public:
//    int numDecodings(string s) {
//        int n = s.size();
//        vector<int> dp(n + 1);
//        dp[0] = 1;
//        dp[1] = s[0] != '0';
//        if (n == 1) return dp[1];
//        for (int i = 2; i <= n; i++)
//        {
//            if (s[i - 1] != '0')
//            {
//                dp[i] += dp[i - 1];
//            }
//            int ret = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
//            if (ret >= 10 && ret <= 26)
//            {
//                dp[i] += dp[i - 2];
//            }
//        }
//        return dp[n];
//    }
//};


// 不同路径
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m, vector<int>(n));
//        for (int i = 0; i < m; i++)
//        {
//            dp[i][0] = 1;
//        }
//        for (int j = 1; j < n; j++)
//        {
//            dp[0][j] = 1;
//        }
//        for (int i = 1; i < m; i++)
//        {
//            for (int j = 1; j < n; j++)
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//        return dp[m - 1][n - 1];
//    }
//};


// 不同路径 II
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = 0; i < n; i++)
//        {
//            if (obstacleGrid[i][0] == 0)
//            {
//                dp[i][0] = 1;
//            }
//            else
//            {
//                break;
//            }
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (obstacleGrid[0][j] == 0)
//            {
//                dp[0][j] = 1;
//            }
//            else
//            {
//                break;
//            }
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (obstacleGrid[i][j]) continue;
//                if (obstacleGrid[i][j - 1] == 0)
//                {
//                    dp[i][j] += dp[i][j - 1];
//                }
//                if (obstacleGrid[i - 1][j] == 0)
//                {
//                    dp[i][j] += dp[i - 1][j];
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};

//
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        dp[0][1] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                if (obstacleGrid[i - 1][j - 1] == 0)
//                {
//                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//                }
//            }
//        }
//        return dp[n][m];
//    }
//};


