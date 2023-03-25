// 股票的最大利润
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        vector<int> dp(prices.size());
//        for (int i = 0; i < prices.size(); i++)
//        {
//            int max = 0;
//            for (int j = 0; j < i; j++)
//            {
//                int ret = prices[i] - prices[j];
//                if (max < ret)
//                {
//                    max = ret;
//                }
//            }
//            dp[i] = max;
//        }
//        int ans = 0;
//        for (int i = 0; i < dp.size(); i++)
//        {
//            if (ans < dp[i])
//            {
//                ans = dp[i];
//            }
//        }
//        return ans;
//    }
//};

//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        if (prices.empty())
//        {
//            return 0;
//        }
//        int minval = prices[0];
//        int res = 0;
//        for (int i = 1; i < prices.size(); i++)
//        {
//            if (prices[i] < minval)
//            {
//                minval = prices[i];
//            }
//            else
//            {
//                res = max(res, prices[i] - minval);
//            }
//        }
//        return res;
//    }
//};