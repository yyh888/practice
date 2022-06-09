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
//        if (root->val != root->left->val)
//        {
//            return false;
//        }
//    }
//    if (root->right)
//    {
//        if (root->val != root->right->val)
//        {
//            return false;
//        }
//    }
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
//}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /*int maxDepth(struct TreeNode* root){
     if(root == NULL)
     {
         return 0;
     }
     if(root->left == NULL && root->right == NULL)
     {
         return 1;
     }
     return maxDepth(root->left) > maxDepth(root->right) ?
     maxDepth(root->left) + 1 : maxDepth(root->right) + 1 ;
 }*/


//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return 0;
//    }
//    if (root->left == NULL && root->right == NULL)
//    {
//        return 1;
//    }
//    int left = maxDepth(root->left);
//    int right = maxDepth(root->right);
//    return left > right ? left + 1 : right + 1;
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
//        return 0;
//    }
//    return TreeSize(root->left) + TreeSize(root->right) + 1;
//}
//
//void _preorderTraversal(struct TreeNode* root, int* a, int* k)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    a[(*k)++] = root->val;
//    _preorderTraversal(root->left, a, k);
//    _preorderTraversal(root->right, a, k);
//}
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int size = TreeSize(root);
//    int* arr = (int*)malloc(sizeof(int) * size);
//    int a = 0;
//    _preorderTraversal(root, arr, &a);
//    *returnSize = size;
//    return arr;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[12] = { 'c', 'a', 'd', 'a' };
//    printf("%d", strlen(arr));
//    return 0;
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
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//    if (p->val != q->val)
//    {
//        return false;
//    }
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool _isSymmetric(struct TreeNode* left, struct TreeNode* right)
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
//    return _isSymmetric(left->left, right->right) && _isSymmetric(left->right, right->left);
//}
//
//
//
//
//bool isSymmetric(struct TreeNode* root) {
//    if (root == NULL)
//    {
//        return true;
//    }
//    return _isSymmetric(root->left, root->right);
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