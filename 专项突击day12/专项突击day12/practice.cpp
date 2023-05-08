// 二叉树每层的最大值
//class Solution {
//public:
//    vector<int> largestValues(TreeNode* root) {
//        if (root == nullptr) return {};
//        vector<int> res;
//        queue<TreeNode*> q;
//        q.push(root);
//        int levelsize = 1;
//        while (!q.empty())
//        {
//            int Max = INT_MIN;
//            while (levelsize--)
//            {
//                TreeNode* tmp = q.front();
//                Max = max(Max, tmp->val);
//                q.pop();
//                if (tmp->left) q.push(tmp->left);
//                if (tmp->right) q.push(tmp->right);
//            }
//            levelsize = q.size();
//            res.push_back(Max);
//        }
//        return res;
//    }
//};


// 二叉树最底层最左边的值
//class Solution {
//public:
//    int findBottomLeftValue(TreeNode* root) {
//        queue<TreeNode*> q;
//        q.push(root);
//        int levelsize = 1;
//        int res = root->val;
//        while (!q.empty())
//        {
//            bool flag = true;
//            while (levelsize--)
//            {
//                TreeNode* tmp = q.front();
//                if (flag)
//                {
//                    res = tmp->val;
//                    flag = false;
//                }
//                q.pop();
//                if (tmp->left) q.push(tmp->left);
//                if (tmp->right) q.push(tmp->right);
//            }
//            levelsize = q.size();
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int maxDep, res;
//
//    void dfs(TreeNode* root, int depth)
//    {
//        if (root == nullptr) return;
//        if (depth > maxDep)
//        {
//            maxDep = depth;
//            res = root->val;
//        }
//        dfs(root->left, depth + 1);
//        dfs(root->right, depth + 1);
//    }
//
//    int findBottomLeftValue(TreeNode* root) {
//        maxDep = 0;
//        dfs(root, 1);
//        return res;
//    }
//};


// 二叉树的右侧视图
//class Solution {
//public:
//    vector<int> v;
//    int maxDep;
//
//    void dfs(TreeNode* root, int depth)
//    {
//        if (root == nullptr) return;
//        if (depth > maxDep)
//        {
//            maxDep = depth;
//            v.push_back(root->val);
//        }
//        dfs(root->right, depth + 1);
//        dfs(root->left, depth + 1);
//    }
//
//    vector<int> rightSideView(TreeNode* root) {
//        maxDep = 0;
//        dfs(root, 1);
//        return v;
//    }
//};


// 二叉树剪枝
//class Solution {
//public:
//    bool dfs(TreeNode* root)
//    {
//        if (root == nullptr) return true;
//        if (root->val == 1) return false;
//        return dfs(root->left) && dfs(root->right);
//    }
//
//    TreeNode* pruneTree(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        if (root->val == 0)
//        {
//            if (dfs(root->left) && dfs(root->right))
//            {
//                return nullptr;
//            }
//        }
//        root->left = pruneTree(root->left);
//        root->right = pruneTree(root->right);
//        return root;
//    }
//};


//class Solution {
//public:
//    TreeNode* pruneTree(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        root->left = pruneTree(root->left);
//        root->right = pruneTree(root->right);
//        if (!root->left && !root->right && !root->val)
//        {
//            return nullptr;
//        }
//        return root;
//    }
//};


