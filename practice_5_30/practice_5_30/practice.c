/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//bool _isBalanced(struct TreeNode* root, int* ph)
//{
//    if (root == NULL)
//    {
//        *ph = 0;
//        return true;
//    }
//    int lefthight = 0;
//    if (!_isBalanced(root->left, &lefthight))
//    {
//        return false;
//    }
//    int righthight = 0;
//    if (!_isBalanced(root->right, &righthight))
//    {
//        return false;
//    }
//    *ph = fmax(lefthight, righthight) + 1;
//    //*ph = lefthight > righthight ? lefthight + 1 : righthight + 1;
//    return abs(lefthight - righthight) < 2;
//}
//
//
//bool isBalanced(struct TreeNode* root) {
//    int hight = 0;
//    return _isBalanced(root, &hight);
//}



//#include<stdio.h>
//
//typedef struct TreeNode
//{
//    char val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//}TreeNode;
//
//TreeNode* TreeCreat(char* str, int* pi)
//{
//    if (str[*pi] == '#')
//    {
//        (*pi)++;
//        return NULL;
//    }
//
//    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
//    root->val = str[*pi];
//    (*pi)++;
//    //±éÀú×óÊ÷
//    root->left = TreeCreat(str, pi);
//    root->right = TreeCreat(str, pi);
//    return root;
//}
//
//
//
//void TreePrint(TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    TreePrint(root->left);
//    printf("%c ", root->val);
//    TreePrint(root->right);
//}
//
//
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%s", arr);
//    int i = 0;
//    TreeNode* node = TreeCreat(arr, &i);
//    TreePrint(node);
//    return 0;
//}