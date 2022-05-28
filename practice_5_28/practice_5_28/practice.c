/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */


//int Treesize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return Treesize(root->left) + Treesize(root->right) + 1;
//}
//
//void _preorder(struct TreeNode* root, int* arr, int* i)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    arr[(*i)++] = root->val;
//    _preorder(root->left, arr, i);
//    _preorder(root->right, arr, i);
//}
//
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = Treesize(root);
//    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
//    int i = 0;
//    _preorder(root, arr, &i);
//    return arr;
//}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//    if ((p == NULL && q != NULL) || (p != NULL && q == NULL))
//    {
//        return false;
//    }
//    if (p->val != q->val || !isSameTree(p->left, q->left))
//    {
//        return false;
//    }
//    if (p->val != q->val || !isSameTree(p->right, q->right))
//    {
//        return false;
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


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */


//int TreeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return NULL;
//    }
//    return TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//
//void _inorder(struct TreeNode* root, int* arr, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    _inorder(root->left, arr, pi);
//    arr[(*pi)++] = root->val;
//    _inorder(root->right, arr, pi);
//}
//
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    /**returnSize = TreeSize(root);
    int* arr = (int*)malloc(sizeof(int) * TreeSize(root));
    int i = 0;
    _inorder(root, arr, &i);
    return arr;*/
//}


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */


//int TreeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return NULL;
//    }
//    return TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//
//void _inorder(struct TreeNode* root, int* arr, int* pi)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    _inorder(root->left, arr, pi);
//    _inorder(root->right, arr, pi);
//    arr[(*pi)++] = root->val;
//}
//
//
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    *returnSize = TreeSize(root);
//    int* arr = (int*)malloc(sizeof(int) * TreeSize(root));
//    int i = 0;
//    _inorder(root, arr, &i);
//    return arr;
//}



