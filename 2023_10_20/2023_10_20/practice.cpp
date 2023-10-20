class Solution {
public:
    unordered_map<int, int> hash;

    bool dfs(TreeNode* root, int k)
    {
        if (root == nullptr) return false;
        if (hash[k - root->val] > 0) return true;
        hash[root->val]++;
        return dfs(root->left, k) || dfs(root->right, k);
    }

    bool findTarget(TreeNode* root, int k) {
        return dfs(root, k);
    }
};