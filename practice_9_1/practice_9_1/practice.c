typedef struct TreeNode* QDateType;

typedef struct QueueNode
{
    struct QueueNode* next;
    QDateType date;
}QueueNode;

typedef struct Queue
{
    QueueNode* head;
    QueueNode* tail;
}Queue;

bool QueueEmpty(Queue* pst);

void QueueInit(Queue* pst)
{
    pst->head = pst->tail = NULL;
}



void QueueDestroy(Queue* pst)
{
    QueueNode* cur = pst->head;
    while (cur)
    {
        QueueNode* next = cur->next;
        free(cur);
        cur = next;
    }
    pst->head = pst->tail = NULL;

}

void QueuePush(Queue* pst, QDateType x)
{
    QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
    if (newnode == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }
    newnode->date = x;
    newnode->next = NULL;
    if (pst->head == NULL)
    {
        pst->head = newnode;
        pst->tail = newnode;
    }
    else
    {
        pst->tail->next = newnode;
        pst->tail = newnode;
    }
}

void QueuePop(Queue* pst)
{
    if (pst->head->next == NULL)
    {
        free(pst->head);
        pst->head = pst->tail = NULL;
    }
    else
    {
        QueueNode* next = pst->head->next;
        free(pst->head);
        pst->head = next;
    }
}

QDateType QueueBack(Queue* pst)
{
    return pst->tail->date;
}

QDateType QueueFront(Queue* pst)
{
    return pst->head->date;
}

//真返回非0
bool QueueEmpty(Queue* pst)
{
    return pst->head == NULL;
}

int QueueSize(Queue* pst)
{
    QueueNode* cur = pst->head;
    int size = 0;
    while (cur)
    {
        size++;
        cur = cur->next;
    }
    return size;
}

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

int* solve(int* xianxu, int xianxuLen, int* zhongxu, int zhongxuLen, int* returnSize) {
    struct TreeNode* root = reConstructBinaryTree(xianxu, xianxuLen, zhongxu, zhongxuLen);
    Queue q;
    QueuePush(&q, root);
    //记录返回数组
    int* tmp = (int*)malloc(sizeof(int) * 10000);
    int i = 0;
    while (!QueueEmpty(&q))
    {
        int size = QueueSize(&q);
        while (size--)
        {
            struct TreeNode* ret = QueueFront(&q);
            QueuePop(&q);
            if (size == 0)
            {
                tmp[i++] = ret->val;
            }
            //入左子树
            if (ret->left)
            {
                QueuePush(&q, ret->left);
            }
            //入右子树
            if (ret->right)
            {
                QueuePush(&q, ret->right);
            }
        }
    }
    *returnSize = i;
    return tmp;
}