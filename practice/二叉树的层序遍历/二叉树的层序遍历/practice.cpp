class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        if (!root) return vv;
        queue<TreeNode*> q;
        q.push(root);
        int levelsize = 1;
        while (!q.empty())
        {
            vector<int> v;
            while (levelsize--)
            {
                TreeNode* cur = q.front();
                v.push_back(cur->val);
                q.pop();
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }
            if (!v.empty()) vv.push_back(v);
            levelsize = q.size();
        }
        return vv;
    }
};