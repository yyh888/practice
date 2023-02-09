//class Solution {
//public:
//    string tree2str(TreeNode* root) {
//        string s;
//        if (!root) return s;
//        s += to_string(root->val);
//        if (!root->left && !root->right) return to_string(root->val);
//
//        s += "(";
//        s += tree2str(root->left);
//        s += ")";
//        if (root->right)
//        {
//            s += "(";
//            s += tree2str(root->right);
//            s += ")";
//        }
//        return s;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        vector<vector<int>> vv;
//        if (!root) return vv;
//        queue<TreeNode*> q;
//        q.push(root);
//        int levelsize = 1;
//        while (!q.empty())
//        {
//            vector<int> v;
//            while (levelsize--)
//            {
//                TreeNode* cur = q.front();
//                v.push_back(cur->val);
//                q.pop();
//                if (cur->left) q.push(cur->left);
//                if (cur->right) q.push(cur->right);
//            }
//            if (!v.empty()) vv.push_back(v);
//            levelsize = q.size();
//        }
//        reverse(vv.begin(), vv.end());
//        return vv;
//    }
//};


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == p || root == q || root == nullptr) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left && right) return root;
        if (!left) return right;
        return left;
    }
};