//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        int left = 0, right = 0;
//        int i = 0;
//        int res = 0;
//        while (i < n - 1)
//        {
//            int right = nums[i + 1] - nums[i];
//            if (right == 0)
//            {
//                i++;
//                continue;
//            }
//            if (left * right <= 0)
//            {
//                res++;
//                left = right;
//            }
//            i++;
//        }
//        return res + 1;
//    }
//};


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, -0x3f3f3f3f));// ÂòÈë
//        vector<vector<int>> g(n, vector<int>(3, -0x3f3f3f3f));// Âô³ö
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j > 0)
//                {
//                    g[i][j] = max(f[i - 1][j - 1] + prices[i], g[i - 1][j]);
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


