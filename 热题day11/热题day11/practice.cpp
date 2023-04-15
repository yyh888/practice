// 不同的二叉搜索树
//class Solution {
//public:
//    int numTrees(int n) {
//        vector<int> G(n + 1, 0);
//        G[0] = 1;
//        G[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j <= i; j++)
//            {
//                G[i] += G[j - 1] * G[i - j];
//            }
//        }
//        return G[n];
//    }
//};


// 验证二叉搜索树
//class Solution {
//public:
//
//    bool inorder(TreeNode* root, long long& val)
//    {
//        if (root == nullptr)
//        {
//            return true;
//        }
//        if (!inorder(root->left, val))
//        {
//            return false;
//        }
//        if (val >= root->val)
//        {
//            return false;
//        }
//        val = root->val;
//        return inorder(root->right, val);
//    }
//
//    bool isValidBST(TreeNode* root) {
//        long long val = LLONG_MIN;
//        return inorder(root, val);
//    }
//};


// 二叉树展开为链表
//class Solution {
//public:
//    void dfs(TreeNode* root, vector<TreeNode*>& v)
//    {
//        if (root == nullptr) return;
//        v.push_back(root);
//        dfs(root->left, v);
//        dfs(root->right, v);
//    }
//
//    void flatten(TreeNode* root) {
//        if (root == nullptr) return;
//        vector<TreeNode*> v;
//        dfs(root, v);
//        root = v[0];
//        TreeNode* next = root;
//        for (int i = 1; i < v.size(); i++)
//        {
//            next->right = v[i];
//            next->left = nullptr;
//            next = next->right;
//        }
//    }
//};

//class Solution {
//public:
//    void flatten(TreeNode* root) {
//        while (root)
//        {
//            // 左子树为空就走右子树
//            if (root->left == nullptr)
//            {
//                root = root->right;
//            }
//            else
//            {
//                // 找到左子树的最右节点
//                TreeNode* pre = root->left;
//                while (pre->right)
//                {
//                    pre = pre->right;
//                }
//                pre->right = root->right;
//                root->right = root->left;
//                root->left = nullptr;
//                root = root->right;
//            }
//        }
//    }
//};


//class Solution {
//public:
//    void flatten(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return;
//        }
//        flatten(root->left);
//        TreeNode* right = root->right;
//        root->right = root->left;
//        root->left = nullptr;
//        while (root->right)
//        {
//            root = root->right;
//        }
//        flatten(right);
//        root->right = right;
//    }
//};