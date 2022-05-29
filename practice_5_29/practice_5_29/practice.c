/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool isTreesym(struct TreeNode* left, struct TreeNode* right)
//{
//    if (left == NULL && right == NULL)
//    {
//        return true;
//    }
//    if (left == NULL || right == NULL)
//    {
//        return false;
//    }
//    if (left->val != right->val)
//    {
//        return false;
//    }
//    return isTreesym(left->left, right->right) && isTreesym(left->right, right->left);
//}
//
//
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    return isTreesym(root->left, root->right);
//}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



//bool iscommon(struct TreeNode* root, struct TreeNode* subRoot)
//{
//    if (root == NULL && subRoot == NULL)
//    {
//        return true;
//    }
//    if (root == NULL || subRoot == NULL)
//    {
//        return false;
//    }
//    if (root->val != subRoot->val)
//    {
//        return false;
//    }
//    return iscommon(root->left, subRoot->left) && iscommon(root->right, subRoot->right);
//}
//
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL)
//    {
//        return false;
//    }
//    if (iscommon(root, subRoot))
//    {
//        return true;
//    }
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//}


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//int TreeHigh(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int left = TreeHigh(root->left);
//    int right = TreeHigh(root->right);
//    return left > right ? left + 1 : right + 1;
//}
//
//
//
//bool isBalanced(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    if (abs(TreeHigh(root->left) - TreeHigh(root->right)) > 1)
//    {
//        return false;
//    }
//    return isBalanced(root->left) && isBalanced(root->right);
//}



