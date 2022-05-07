#define  _CRT_SECURE_NO_WARNINGS

//typedef int QDateType;
//
//
//typedef struct QueueNode
//{
//	struct QueueNode* next;
//	QDateType date;
//}QueueNode;
//
//
//typedef struct Queue
//{
//	QueueNode* head;
//	QueueNode* tail;
//}Queue;
//
//
//
//
//extern void QueueInit(Queue* pst);
//extern void QueueDestroy(Queue* pst);
//
//extern void QueuePush(Queue* pst, QDateType x);
//extern void QueuePop(Queue* pst);
//
//extern QDateType QueueBack(Queue* pst);
//extern QDateType QueueFront(Queue* pst);
//
//extern bool QueueEmpty(Queue* pst);
//extern int QueueSize(Queue* pst);
//
//
//void QueueInit(Queue* pst)
//{
//	assert(pst);
//	pst->head = pst->tail = NULL;
//}
//
//
//
//void QueueDestroy(Queue* pst)
//{
//	assert(pst);
//	QueueNode* cur = pst->head;
//	while (cur)
//	{
//		QueueNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pst->head = pst->tail = NULL;
//
//}
//
//void QueuePush(Queue* pst, QDateType x)
//{
//	assert(pst);
//	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newnode->date = x;
//	newnode->next = NULL;
//	if (pst->head == NULL)
//	{
//		pst->head = newnode;
//		pst->tail = newnode;
//	}
//	else
//	{
//		pst->tail->next = newnode;
//		pst->tail = newnode;
//	}
//}
//
//
//
//void QueuePop(Queue* pst)
//{
//	assert(pst);
//	assert(!QueueEmpty(pst));
//	if (pst->head->next == NULL)
//	{
//		free(pst->head);
//		pst->head = pst->tail = NULL;
//	}
//	else
//	{
//		QueueNode* next = pst->head->next;
//		free(pst->head);
//		pst->head = next;
//	}
//}
//
//
//
//
//QDateType QueueBack(Queue* pst)
//{
//	assert(pst);
//	assert(!QueueEmpty(pst));
//	return pst->tail->date;
//}
//
//
//
//QDateType QueueFront(Queue* pst)
//{
//	assert(pst);
//	assert(!QueueEmpty(pst));
//	return pst->head->date;
//}
//
////真返回非0
//bool QueueEmpty(Queue* pst)
//{
//	assert(pst);
//	return pst->head == NULL;
//}
//
//
//
//
//
//int QueueSize(Queue* pst)
//{
//	QueueNode* cur = pst->head;
//	int size = 0;
//	while (cur)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//	//初始化队列
//	QueueInit(&pst->q1);
//	QueueInit(&pst->q2);
//	return pst;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Queue* pempty = &obj->q1;
//	Queue* pnoempty = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		pempty = &obj->q2;
//		pnoempty = &obj->q1;
//	}
//	while (QueueSize(pnoempty) > 1)
//	{
//		QueuePush(pempty, QueueFront(pnoempty));
//		QueuePop(pnoempty);
//	}
//	int tmp = QueueFront(pnoempty);
//	QueuePop(pnoempty);
//	return tmp;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/



