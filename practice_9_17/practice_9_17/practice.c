struct TreeNode* BuyNode(int x)
{
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
    root->val = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

struct TreeNode* reConstructBinaryTree(int* pre, int preLen, int* vin, int vinLen) {
    //判空
    if (vinLen == 0)
    {
        return NULL;
    }
    //第一个节点为根
    struct TreeNode* head = BuyNode(pre[0]);
    //通过中序遍历找根
    int root = 0;
    for (int i = 0; i < vinLen; i++)
    {
        if (pre[0] == vin[i])
        {
            root = i;
            break;
        }
    }
    //左子树
    int size_left = root;
    int* pre_left = (int*)malloc(sizeof(int) * size_left);
    int* vin_left = (int*)malloc(sizeof(int) * size_left);
    for (int i = 0; i < size_left; i++)
    {
        pre_left[i] = pre[i + 1];//第一个元素为根
        vin_left[i] = vin[i];
    }
    //右子树
    int size_right = vinLen - root - 1;
    int* pre_right = (int*)malloc(sizeof(int) * size_right);
    int* vin_right = (int*)malloc(sizeof(int) * size_right);
    int j = 0;//数组从0下标开始
    for (int i = root + 1; i < vinLen; i++)
    {
        pre_right[j] = pre[i];
        vin_right[j] = vin[i];
        j++;
    }
    head->left = reConstructBinaryTree(pre_left, size_left, vin_left, size_left);
    head->right = reConstructBinaryTree(pre_right, size_right, vin_right, size_right);
    return head;
}
