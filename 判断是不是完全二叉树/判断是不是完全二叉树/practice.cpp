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
