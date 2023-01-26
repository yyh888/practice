class Solution {
public:
    void dfs(TreeNode* root, vector<int>& v)
    {
        if (!root->left && !root->right)
        {
            v.push_back(root->val);
            return;
        }
        if (root->left) dfs(root->left, v);
        if (root->right) dfs(root->right, v);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        dfs(root1, v1);
        vector<int> v2;
        dfs(root2, v2);
        if (v1.size() != v2.size()) return false;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] != v2[i]) return false;
        }
        return true;
    }
};