//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(3));
//        dp[0][0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][2] - prices[i]);
//            dp[i][1] = dp[i - 1][0] + prices[i];
//            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1]);
//        }
//        return max(dp[n - 1][2], dp[n - 1][1]);
//    }
//};


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int MinP = prices[0];
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (MinP > prices[i]) MinP = prices[i];
//            res = max(res, prices[i] - MinP);
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int l = 0, r = 0;
//        int sum = 0;
//        while (r < n)
//        {
//            if (r < n - 1 && prices[r] < prices[r + 1])
//            {
//                r++;
//            }
//            else
//            {
//                sum += prices[r] - prices[l];
//                l = r + 1;
//                r = l;
//            }
//        }
//        return sum;
//    }
//};


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int sum = 0;
//        for (int i = 1; i < n; i++)
//        {
//            if (prices[i] > prices[i - 1])
//            {
//                sum += prices[i] - prices[i - 1];
//            }
//        }
//        return sum;
//    }
//};