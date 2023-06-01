// 01背包
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//const int N = 1010;
//int V, n;
//int w[N], v[N];
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
//        for (int j = 1; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i])
//            {
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
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
//        for (int j = 1; j <= V; j++)
//        {
//            dp[i][j] = dp[i - 1][j];
//            if (j >= v[i] && dp[i - 1][j - v[i]] != -1)
//            {
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
//            }
//        }
//    }
//    if (dp[n][V] == -1) cout << 0 << endl;
//    else cout << dp[n][V];
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//const int N = 1010;
//int V, n;
//int w[N], v[N];
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
//        for (int j = V; j > 0; j--)
//        {
//            if (j >= v[i])
//            {
//                dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//            }
//        }
//    }
//    cout << dp[V] << endl;
//    memset(dp, 0, sizeof dp);
//    for (int j = 1; j <= V; j++)
//    {
//        dp[j] = -1;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = V; j > 0; j--)
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


// 分割等和子集
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//        }
//        if (sum % 2) return false;
//        int target = sum / 2;
//        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1));
//        for (int i = 0; i <= n; i++) dp[i][0] = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= target; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1] && !dp[i][j]) dp[i][j] = dp[i - 1][j - nums[i - 1]];
//            }
//        }
//        return dp[n][target];
//    }
//};


//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        int sum = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//        }
//        if (sum % 2) return false;
//        int target = sum / 2;
//        vector<bool> dp(target + 1);
//        dp[0] = true;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = target; j > 0; j--)
//            {
//                dp[j] = dp[j];
//                if (j >= nums[i - 1] && !dp[j]) dp[j] = dp[j - nums[i - 1]];
//            }
//        }
//        return dp[target];
//    }
//};


// 目标和
//class Solution {
//public:
//    int sum = 0;
//
//    void dfs(const vector<int>& nums, int cur, int target, int idx)
//    {
//        if (cur == target && idx == nums.size())
//        {
//            sum++;
//            return;
//        }
//        if (idx == nums.size()) return;
//        dfs(nums, cur + nums[idx], target, idx + 1);
//        dfs(nums, cur - nums[idx], target, idx + 1);
//    }
//
//    int findTargetSumWays(vector<int>& nums, int target) {
//        dfs(nums, 0, target, 0);
//        return sum;
//    }
//};

// 目标和
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//        }
//        int a = (sum + target) / 2;
//        if (a < 0 || (sum + target) % 2) return 0;
//        vector<vector<int>> dp(n + 1, vector<int>(a + 1));
//        dp[0][0] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= a; j++)
//            {
//                dp[i][j] = dp[i - 1][j];
//                if (j >= nums[i - 1]) dp[i][j] += dp[i - 1][j - nums[i - 1]];
//            }
//        }
//        return dp[n][a];
//    }
//};

//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int sum = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//        }
//        int a = (sum + target) / 2;
//        if (a < 0 || (sum + target) % 2) return 0;
//        vector<int> dp(a + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = a; j >= 0; j--)
//            {
//                if (j >= nums[i - 1]) dp[j] += dp[j - nums[i - 1]];
//            }
//        }
//        return dp[a];
//    }
//};