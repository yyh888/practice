class Solution {
public:
    int ans = INT_MAX;

    void dfs(TreeNode* root, int& pre)
    {
        if (root == nullptr) return;
        dfs(root->left, pre);
        if (pre == -1)
        {
            pre = root->val;
        }
        else
        {
            ans = min(ans, root->val - pre);
            pre = root->val;
        }
        dfs(root->right, pre);
    }

    int getMinimumDifference(TreeNode* root) {
        int pre = -1;
        dfs(root, pre);
        return ans;
    }
};