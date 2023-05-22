// ��ˢ����
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        int n = costs.size(), m = costs[0].size();
//        vector<vector<int>> dp(n + 1, vector<int>(m));
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                dp[i][j] = costs[i - 1][j] + min(dp[i - 1][(j + 2) % 3], dp[i - 1][(j + 1) % 3]);
//            }
//        }
//        int ret = INT_MAX;
//        for (int i = 0; i < m; i++)
//        {
//            ret = min(ret, dp[n][i]);
//        }
//        return ret;
//    }
//};

// ���������Ʊʱ�����䶳��
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(3));
//        dp[0][0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);
//            dp[i][2] = dp[i - 1][0] + prices[i];
//        }
//        return max(dp[n - 1][1], dp[n - 1][2]);
//    }
//};


// ������Ʊ�����ʱ����������
//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        int n = prices.size();
//        vector<int> f(n);// ����״̬
//        vector<int> g(n);// ����״̬
//        f[0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            f[i] = max(f[i - 1], g[i - 1] - prices[i]);
//            g[i] = max(g[i - 1], f[i - 1] + prices[i] - fee);
//        }
//        return g[n - 1];
//    }
//};