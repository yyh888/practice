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

bool isCompleteTree(struct TreeNode* root) {
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		struct TreeNode* tmp = QueueFront(&q);
		QueuePop(&q);
		if (tmp == NULL)
		{
			//后边必须全部为NULL
			while (!QueueEmpty(&q))
			{
				if (QueueFront(&q) != NULL)
				{
					return false;
				}
				QueuePop(&q);
			}
			return true;
		}
		else
		{
			QueuePush(&q, tmp->left);
			QueuePush(&q, tmp->right);
		}
	}
	return true;
}




void AdjustArr(struct TreeNode* root, int p, int* arr, int* l)
{
	if (!root)
	{
		return;
	}
	if (root->val < p)
	{
		arr[*l] = root->val;
		(*l)++;
		AdjustArr(root->right, p, arr, l);
	}
	else if (root->val > p)
	{
		arr[*l] = root->val;
		(*l)++;
		AdjustArr(root->left, p, arr, l);
	}
	else
	{
		arr[*l] = root->val;
		(*l)++;
		return;
	}
}

int lowestCommonAncestor(struct TreeNode* root, int p, int q) {
	int* arr1 = (int*)malloc(sizeof(int) * 1000);
	//记录长度
	int l1 = 0;
	AdjustArr(root, p, arr1, &l1);
	int* arr2 = (int*)malloc(sizeof(int) * 1000);
	//记录长度
	int l2 = 0;
	AdjustArr(root, q, arr2, &l2);
	//遍历两个数组,找到第一个不同的点
	int ret = 0;
	for (int i = 0; i < l1 && i < l2; i++)
	{
		if (arr1[i] == arr2[i])
		{
			ret = arr1[i];
		}
		else
		{
			break;
		}
	}
	return ret;
}


int lowestCommonAncestor(struct TreeNode* root, int p, int q) {
	if (root->val < p && root->val < q)
	{
		return lowestCommonAncestor(root->right, p, q);
	}
	else if (root->val > p && root->val > q)
	{
		return lowestCommonAncestor(root->left, p, q);
	}
	else
	{
		return root->val;
	}
}
