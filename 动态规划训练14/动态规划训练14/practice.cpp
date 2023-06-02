// 最后一块石头的重量 II
//class Solution {
//public:
//    int lastStoneWeightII(vector<int>& stones) {
//        int n = stones.size();
//        int sum = 0;
//        for (int& e : stones)
//        {
//            sum += e;
//        }
//        int a = sum / 2;
//        vector<vector<int>> dp(n + 1, vector<int>(a + 1));
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= a; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= stones[i - 1]) dp[i][j] = max(dp[i][j], dp[i - 1][j - stones[i - 1]] + stones[i - 1]);
//            }
//        }
//        return abs(dp[n][a] - (sum - dp[n][a]));
//    }
//};


// 完全背包
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 1010;
//int n, V, v[N], w[N];
//int dp[N][N];
//
//int main()
//{
//    cin >> n >> V;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i] >> w[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i])
//            {
//                dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << dp[n][V] << endl;
//    memset(dp, 0, sizeof dp);
//    for (int j = 1; j <= V; j++)
//    {
//        dp[0][j] = -1;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i] && dp[i][j - v[i]] != -1)
//            {
//                dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//            }
//        }
//    }
//    if (dp[n][V] == -1) cout << 0 << endl;
//    else cout << dp[n][V];
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int N = 1010;
//int n, V, v[N], w[N];
//int dp[N];
//
//int main()
//{
//    cin >> n >> V;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> v[i] >> w[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            if (j >= v[i])
//            {
//                dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << dp[V] << endl;
//    memset(dp, -1, sizeof dp);
//    dp[0] = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= V; j++)
//        {
//            if (j >= v[i] && dp[j - v[i]] != -1)
//            {
//                dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//            }
//        }
//    }
//    if (dp[V] == -1) cout << 0 << endl;
//    else cout << dp[V];
//    return 0;
//}


// 零钱兑换
//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<vector<int>> dp(n + 1, vector<int>(amount + 1));
//        for (int j = 1; j <= amount; j++) dp[0][j] = INT_MAX;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= amount; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= coins[i - 1] && dp[i][j - coins[i - 1]] != INT_MAX) dp[i][j] = min(dp[i][j], dp[i][j - coins[i - 1]] + 1);
//            }
//        }
//        return dp[n][amount] == INT_MAX ? -1 : dp[n][amount];
//    }
//};


//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<int> dp(amount + 1);
//        for (int j = 1; j <= amount; j++) dp[j] = INT_MAX;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= amount; j++)
//            {
//                if (j >= coins[i - 1] && dp[j - coins[i - 1]] != INT_MAX) dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//            }
//        }
//        return dp[amount] == INT_MAX ? -1 : dp[amount];
//    }
//};


// 零钱兑换 II
//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        int n = coins.size();
//        vector<vector<int>> dp(n + 1, vector<int>(amount + 1));
//        dp[0][0] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= amount; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= coins[i - 1]) dp[i][j] += dp[i][j - coins[i - 1]];
//            }
//        }
//        return dp[n][amount];
//    }
//};


//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        int n = coins.size();
//        vector<int> dp(amount + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = coins[i - 1]; j <= amount; j++)
//            {
//                dp[j] += dp[j - coins[i - 1]];
//            }
//        }
//        return dp[amount];
//    }
//};