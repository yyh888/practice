/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    if (root->left)
//    {
//        if (root->left->val != root->val || !isUnivalTree(root->left))
//            return false;
//    }
//    if (root->right)
//    {
//        if (root->right->val != root->val || !isUnivalTree(root->right))
//            return false;
//    }
//    return true;
//}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



//struct TreeNode* invertTree(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return NULL;
//    }
//    struct TreeNode* left = invertTree(root->left);
//    struct TreeNode* right = invertTree(root->right);
//    root->left = right;
//    root->right = left;
//    return root;
//}



