// 买卖股票的最佳时机 II
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(2));
//        dp[0][1] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i][0] = max(prices[i] + dp[i - 1][1], dp[i - 1][0]);
//            dp[i][1] = max(dp[i - 1][0] - prices[i], dp[i - 1][1]);
//        }
//        return max(dp[n - 1][0], dp[n - 1][1]);
//    }
//};


// 存在重复元素
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> st;
//        for (auto& e : nums)
//        {
//            st.insert(e);
//        }
//        return st.size() != nums.size();
//    }
//};


//class Solution {
//public:
//    priority_queue<int, vector<int>, greater<int>> pq;
//
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        pq.push(root->val);
//        dfs(root->left);
//        dfs(root->right);
//    }
//    int kthSmallest(TreeNode* root, int k) {
//        dfs(root);
//        while (--k) pq.pop();
//        return pq.top();
//    }
//};

//二叉搜索树中第K小的元素
//class Solution {
//public:
//    int ans;
//    bool flag = true;
//
//    void dfs(TreeNode* root, int& k)
//    {
//        if (root == nullptr) return;
//        dfs(root->left, k);
//        if (k == 1 && flag)
//        {
//            ans = root->val;
//            flag = false;
//            return;
//        }
//        dfs(root->right, --k);
//    }
//
//    int kthSmallest(TreeNode* root, int k) {
//        dfs(root, k);
//        return ans;
//    }
//};