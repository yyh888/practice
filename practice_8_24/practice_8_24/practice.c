void _preorderTraversal(struct TreeNode* root, int* returnSize, int* tmp)
{
    if (root == NULL)
    {
        return;
    }
    tmp[*returnSize] = root->val;
    (*returnSize)++;
    _preorderTraversal(root->left, returnSize, tmp);
    _preorderTraversal(root->right, returnSize, tmp);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* tmp = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;
    _preorderTraversal(root, returnSize, tmp);
    return tmp;
}


