bool _isBalanced(struct TreeNode* root, int* ph)
{
    if (root == NULL)
    {
        *ph = 0;
        return true;
    }
    int lefthight = 0;
    if (!_isBalanced(root->left, &lefthight))
    {
        return false;
    }
    int righthight = 0;
    if (!_isBalanced(root->right, &righthight))
    {
        return false;
    }
    *ph = lefthight > righthight ? lefthight + 1 : righthight + 1;
    return abs(lefthight - righthight) < 2;
}



bool isBalanced(struct TreeNode* root) {
    int hight = 0;
    return _isBalanced(root, &hight);
}
