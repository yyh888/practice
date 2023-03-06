// 树的子结构

//class Solution {
//public:
//    bool iscommon(TreeNode* A, TreeNode* B)
//    {
//        if (B == nullptr) return true;
//        if (!A && !B) return true;
//        if (!A || !B) return false;
//        if (A->val != B->val)
//        {
//            return false;
//        }
//        return iscommon(A->left, B->left) && iscommon(A->right, B->right);
//    }
//
//    bool isSubStructure(TreeNode* A, TreeNode* B) {
//        if (B == nullptr || A == nullptr)
//        {
//            return false;
//        }
//        if (A->val == B->val)
//        {
//            bool flag = iscommon(A->left, B->left) && iscommon(A->right, B->right);
//            if (flag) return true;
//        }
//        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
//    }
//};


// 二叉树的镜像
//class Solution {
//public:
//    TreeNode* Creat(TreeNode* root)
//    {
//        if (root == nullptr) return nullptr;
//        TreeNode* mroot = new TreeNode(root->val);
//        mroot->left = Creat(root->right);
//        mroot->right = Creat(root->left);
//        return mroot;
//    }
//
//    TreeNode* mirrorTree(TreeNode* root) {
//        if (root == nullptr)
//        {
//            return root;
//        }
//        TreeNode* mroot = Creat(root);
//        return mroot;
//    }
//};