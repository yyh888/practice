// 路径总和 II
//class Solution {
//public:
//    vector<vector<int>> res;
//
//    void dfs(TreeNode* root, int targetSum, vector<int> tmp)
//    {
//        if (root == nullptr) return;
//        targetSum -= root->val;
//        tmp.push_back(root->val);
//        if (!root->left && !root->right && !targetSum)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        dfs(root->left, targetSum, tmp);
//        dfs(root->right, targetSum, tmp);
//        targetSum += root->val;
//        tmp.pop_back();
//    }
//
//    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//        vector<int> tmp;
//        dfs(root, targetSum, tmp);
//        return res;
//    }
//};


// 路径总和 III
//class Solution {
//public:
//    unordered_map<long long, int> hash;
//    int cnt = 0;
//
//    void dfs(TreeNode* root, long long sum, int targetSum)
//    {
//        if (root == nullptr) return;
//        sum += root->val;
//        cnt += hash[sum - targetSum];
//        hash[sum]++;
//        dfs(root->left, sum, targetSum);
//        dfs(root->right, sum, targetSum);
//        hash[sum]--;
//    }
//
//    int pathSum(TreeNode* root, int targetSum) {
//        hash[0] = 1;
//        dfs(root, 0, targetSum);
//        return cnt;
//    }
//};


// 零钱兑换
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
//                if (j >= coins[i - 1] && dp[j - coins[i - 1]] != INT_MAX)
//                    dp[j] = min(dp[j], dp[j - coins[i - 1]] + 1);
//            }
//        }
//        return dp[amount] == INT_MAX ? -1 : dp[amount];
//    }
//};