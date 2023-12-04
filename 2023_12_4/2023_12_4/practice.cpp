class Solution {
public:
    int ret = 0;

    void dfs(TreeNode* root)
    {
        if (root == nullptr) return;
        dfs(root->right);
        ret += root->val;
        root->val = ret;
        dfs(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        return root;
    }
};