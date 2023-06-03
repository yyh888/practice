// 完全平方数
//class Solution {
//public:
//    int numSquares(int n) {
//        vector<int> nums;
//        for (int i = 1; i * i <= n; i++)
//        {
//            nums.push_back(i * i);
//        }
//        int len = nums.size();
//        vector<int> dp(n + 1);
//        for (int j = 1; j <= n; j++) dp[j] = 0x3f3f3f3f;
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = nums[i - 1]; j <= n && dp[j - nums[i - 1]] != 0x3f3f3f3f; j++)
//            {
//                dp[j] = min(dp[j], dp[j - nums[i - 1]] + 1);
//            }
//        }
//        return dp[n];
//    }
//};


//class Solution {
//public:
//    int numSquares(int n) {
//        vector<int> nums;
//        for (int i = 1; i * i <= n; i++)
//        {
//            nums.push_back(i * i);
//        }
//        int len = nums.size();
//        vector<int> dp(n + 1);
//        for (int j = 1; j <= n; j++) dp[j] = 0x3f3f3f3f;
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = nums[i - 1]; j <= n; j++)
//            {
//                dp[j] = min(dp[j], dp[j - nums[i - 1]] + 1);
//            }
//        }
//        return dp[n];
//    }
//};


// 一和零
//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int len = strs.size();
//        vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(m + 1, vector<int>(n + 1)));
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = 0; j <= m; j++)
//            {
//                for (int k = 0; k <= n; k++)
//                {
//                    int a = 0, b = 0;
//                    for (auto& e : strs[i - 1])
//                    {
//                        e == '0' ? a++ : b++;
//                    }
//                    dp[i][j][k] = dp[i - 1][j][k];
//                    if (j >= a && k >= b)
//                    {
//                        dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - a][k - b] + 1);
//                    }
//                }
//            }
//        }
//        return dp[len][m][n];
//    }
//};


//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        int len = strs.size();
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = m; j >= 0; j--)
//            {
//                for (int k = n; k >= 0; k--)
//                {
//                    int a = 0, b = 0;
//                    for (auto& e : strs[i - 1])
//                    {
//                        e == '0' ? a++ : b++;
//                    }
//                    if (j >= a && k >= b)
//                    {
//                        dp[j][k] = max(dp[j][k], dp[j - a][k - b] + 1);
//                    }
//                }
//            }
//        }
//        return dp[m][n];
//    }
//};


// 盈利计划
//class Solution {
//public:
//    const int mod = 1e9 + 7;
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int len = group.size();
//        // dp[计划][人数][盈利]
//        vector<vector<vector<int>>> dp(len + 1, vector<vector<int>>(n + 1, vector<int>(minProfit + 1)));
//        for (int j = 0; j <= n; j++) dp[0][j][0] = 1;
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = 0; j <= n; j++)
//            {
//                for (int k = 0; k <= minProfit; k++)
//                {
//                    dp[i][j][k] = dp[i - 1][j][k];
//                    if (j >= group[i - 1])
//                    {
//                        dp[i][j][k] += dp[i - 1][j - group[i - 1]][max(0, k - profit[i - 1])];
//                    }
//                    dp[i][j][k] %= mod;
//                }
//            }
//        }
//        return dp[len][n][minProfit];
//    }
//};


//class Solution {
//public:
//    const int mod = 1e9 + 7;
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int len = group.size();
//        // dp[计划][人数][盈利]
//        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1));
//        for (int j = 0; j <= n; j++) dp[j][0] = 1;
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = n; j >= 0; j--)
//            {
//                for (int k = minProfit; k >= 0; k--)
//                {
//                    if (j >= group[i - 1])
//                    {
//                        dp[j][k] += dp[j - group[i - 1]][max(0, k - profit[i - 1])];
//                    }
//                    dp[j][k] %= mod;
//                }
//            }
//        }
//        return dp[n][minProfit];
//    }
//};


//class Solution {
//public:
//    const int mod = 1e9 + 7;
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        int len = group.size();
//        // dp[计划][人数][盈利]
//        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1));
//        for (int j = 0; j <= n; j++) dp[j][0] = 1;
//        for (int i = 1; i <= len; i++)
//        {
//            for (int j = n; j >= group[i - 1]; j--)
//            {
//                for (int k = minProfit; k >= 0; k--)
//                {
//                    dp[j][k] += dp[j - group[i - 1]][max(0, k - profit[i - 1])];
//                    dp[j][k] %= mod;
//                }
//            }
//        }
//        return dp[n][minProfit];
//    }
//};