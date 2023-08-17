//class Solution {
//public:
//    vector<string> res;
//    string tmp;
//
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        string ret = tmp;
//        tmp += to_string(root->val) + "->";
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            res.push_back(tmp.substr(0, tmp.size() - 2));
//            tmp = ret;
//            return;
//        }
//        dfs(root->left);
//        dfs(root->right);
//        tmp = ret;
//    }
//
//    vector<string> binaryTreePaths(TreeNode* root) {
//        dfs(root);
//        return res;
//    }
//};

//
//class Solution {
//public:
//    int minDistance(string word1, string word2) {
//        word1 = " " + word1;
//        word2 = " " + word2;
//        int n = word1.size(), m = word2.size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        for (int i = 0; i < n; i++) dp[i][0] = i;
//        for (int j = 0; j < m; j++) dp[0][j] = j;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (word1[i] == word2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1];
//                }
//                else
//                {
//                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


//class Solution {
//public:
//    const int CNF = 0x3f3f3f3f;
//    int coinChange(vector<int>& coins, int amount) {
//        int n = coins.size();
//        vector<int> dp(amount + 1);
//        for (int j = 1; j <= amount; j++) dp[j] = CNF;
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 0; j <= amount; j++)
//            {
//                if (j >= coins[i - 1])
//                    dp[j] = min(dp[j - coins[i - 1]] + 1, dp[j]);
//            }
//        }
//        return dp[amount] == CNF ? -1 : dp[amount];
//    }
//};