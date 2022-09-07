void InOrder(struct TreeLinkNode* root, struct TreeLinkNode** tmp, int* i)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left, tmp, i);
    tmp[*i] = root;
    (*i)++;
    InOrder(root->right, tmp, i);
}

struct TreeLinkNode* GetNext(struct TreeLinkNode* pNode) {
    struct TreeLinkNode* root = pNode;
    //找根节点
    while (root->next)
    {
        root = root->next;
    }
    struct TreeLinkNode* tmp[50];
    int i = 0;
    InOrder(root, tmp, &i);
    //找pNode
    for (int j = 0; j < i + 1; j++)//不能是最后一个
    {
        if (tmp[j]->val == pNode->val)
        {
            return tmp[j + 1];
        }
    }
    return NULL;
}


struct TreeLinkNode* GetNext(struct TreeLinkNode* pNode) {
    if (pNode->right)
    {
        pNode = pNode->right;//下一个节点的左下节点
        while (pNode->left)
        {
            pNode = pNode->left;
        }
        return pNode;
    }
    else
    {
        //父节点
        struct TreeLinkNode* father = pNode->next;
        if (father == NULL)
        {
            return NULL;
        }

        if (pNode == father->left)
        {
            return father;
        }
        else
        {
            while (father)
            {
                struct TreeLinkNode* next = father->next;
                if (next && next->left == father)
                {
                    return next;
                }
                father = next;
            }
            return NULL;
        }
    }
}