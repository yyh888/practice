void _preorderTraversal(struct TreeNode* root, int* pi, int* tmp)
{
    if (root == NULL)
    {
        return;
    }
    tmp[*pi] = root->val;
    (*pi)++;
    _preorderTraversal(root->left, pi, tmp);
    _preorderTraversal(root->right, pi, tmp);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* tmp = (int*)malloc(sizeof(int) * 100);
    int i = 0;
    _preorderTraversal(root, &i, tmp);
    *returnSize = i;
    return tmp;
}

bool isUnivalTree(struct TreeNode* root) {
    if (root == NULL)
    {
        return true;
    }
    if (root->left && root->val != root->left->val)
    {
        return false;
    }
    if (root->right && root->val != root->right->val)
    {
        return false;
    }
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}


int maxDepth(struct TreeNode* root) {
    if (root == NULL)
    {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return left > right ? left + 1 : right + 1;
}


struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL)
    {
        return NULL;
    }
    struct TreeNode* left = invertTree(root->left);
    struct TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    if (p->val != q->val)
    {
        return false;
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}


bool _isSymmetric(struct TreeNode* root1, struct TreeNode* root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    if (root1->val != root2->val)
    {
        return false;
    }
    return _isSymmetric(root1->left, root2->right) && _isSymmetric(root1->right, root2->left);
}


bool isSymmetric(struct TreeNode* root) {
    if (root == NULL)
    {
        return true;
    }
    return _isSymmetric(root->left, root->right);
}


bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    if (p->val != q->val)
    {
        return false;
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (root == NULL)
    {
        return false;
    }
    if (isSameTree(root, subRoot))
    {
        return true;
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}


int _isBalanced(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = _isBalanced(root->left);
    int right = _isBalanced(root->right);
    return left > right ? left + 1 : right + 1;
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
    {
        return true;
    }
    int left = _isBalanced(root->left);
    int right = _isBalanced(root->right);
    if (abs(left - right) > 1)
    {
        return false;
    }
    return isBalanced(root->left) && isBalanced(root->right);
}


#include <stdlib.h>
#include <stdio.h>

typedef char BTDataType;

typedef struct BTNode
{
    BTDataType _data;
    struct BTNode* _left;
    struct BTNode* _right;
}BTNode;

BTNode* BuyTreeNode(BTDataType x)
{
    BTNode* node = (BTNode*)malloc(sizeof(BTNode));
    if (node == NULL)
    {
        printf("malloc fail");
        exit(-1);
    }
    node->_data = x;
    node->_left = node->_right = NULL;
    return node;
}

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
    if (*pi >= n)
    {
        return NULL;
    }
    if (a[*pi] == '#')
    {
        (*pi)++;
        return NULL;
    }
    BTNode* node = BuyTreeNode(a[*pi]);
    (*pi)++;
    node->_left = BinaryTreeCreate(a, n, pi);
    node->_right = BinaryTreeCreate(a, n, pi);
    return node;
}

void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
    {
        return;
    }
    BinaryTreeInOrder(root->_left);
    printf("%c ", root->_data);
    BinaryTreeInOrder(root->_right);
}

int main()
{
    char arr[100];
    scanf("%s", arr);
    int i = 0;
    int n = strlen(arr);
    BTNode* root = BinaryTreeCreate(arr, n, &i);
    BinaryTreeInOrder(root);
    return 0;
}