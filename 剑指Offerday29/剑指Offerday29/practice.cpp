// 二叉搜索树的最近公共祖先
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if (root == nullptr)
//        {
//            return nullptr;
//        }
//        if (root->val == p->val)
//        {
//            return root;
//        }
//        if (root->val == q->val)
//        {
//            return root;
//        }
//        if (root->val < p->val && root->val < q->val)
//        {
//            return lowestCommonAncestor(root->right, p, q);
//        }
//        else if (root->val > p->val && root->val > q->val)
//        {
//            return lowestCommonAncestor(root->left, p, q);
//        }
//        else
//        {
//            return root;
//        }
//    }
//};


//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        while (root)
//        {
//            if (root->val < p->val && root->val < q->val)
//            {
//                root = root->right;
//            }
//            else if (root->val > p->val && root->val > q->val)
//            {
//                root = root->left;
//            }
//            else break;
//        }
//        return root;
//    }
//};

// 二叉树的最近公共祖先
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if (root == nullptr || root->val == p->val || root->val == q->val)
//        {
//            return root;
//        }
//        TreeNode* left = lowestCommonAncestor(root->left, p, q);
//        TreeNode* right = lowestCommonAncestor(root->right, p, q);
//        if (left == nullptr)
//        {
//            return right;
//        }
//        if (right == nullptr)
//        {
//            return left;
//        }
//        return root;
//    }
//};

//class Solution {
//public:
//    bool flag = false;
//    void GetPath(TreeNode* root, TreeNode* t, vector<TreeNode*>& v)
//    {
//        if (root == nullptr || flag)
//        {
//            return;
//        }
//        v.push_back(root);
//        if (root == t)
//        {
//            flag = true;
//            return;
//        }
//        GetPath(root->left, t, v);
//        GetPath(root->right, t, v);
//        if (flag == false)
//        {
//            v.pop_back();
//        }
//    }
//
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        vector<TreeNode*> v1;
//        vector<TreeNode*> v2;
//        GetPath(root, p, v1);
//        flag = false;
//        GetPath(root, q, v2);
//        TreeNode* ret = nullptr;
//        int n = min(v1.size(), v2.size());
//        for (int i = 0; i < n; i++)
//        {
//            if (v1[i] == v2[i])
//            {
//                ret = v1[i];
//            }
//        }
//        return ret;
//    }
//};


