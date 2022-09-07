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
    //�Ҹ��ڵ�
    while (root->next)
    {
        root = root->next;
    }
    struct TreeLinkNode* tmp[50];
    int i = 0;
    InOrder(root, tmp, &i);
    //��pNode
    for (int j = 0; j < i + 1; j++)//���������һ��
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
        pNode = pNode->right;//��һ���ڵ�����½ڵ�
        while (pNode->left)
        {
            pNode = pNode->left;
        }
        return pNode;
    }
    else
    {
        //���ڵ�
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