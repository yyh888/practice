// n个骰子的点数
//class Solution {
//public:
//    vector<double> dicesProbability(int n) {
//        vector<vector<double>> dp(n + 1, vector<double>(6 * n + 1));
//        for (int i = 0; i <= 6; i++)
//        {
//            dp[1][i] = 1.0 / 6.0;
//        }
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j <= 6 * i; j++)
//            {
//                for (int k = 1; k <= 6; k++)
//                {
//                    if (j - k > 0)
//                    {
//                        dp[i][j] += dp[i - 1][j - k] / 6;
//                    }
//                    else
//                    {
//                        break;
//                    }
//                }
//            }
//        }
//        vector<double> res;
//        for (int i = 0; i <= 5 * n; i++)
//        {
//            res.push_back(dp[n][n + i]);
//        }
//        return res;
//    }
//};


