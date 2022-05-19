//typedef int QDateType;
//
//
//typedef struct QueueNode
//{
//    struct QueueNode* next;
//    QDateType date;
//}QueueNode;
//
//
////记录队头和队尾
//typedef struct Queue
//{
//    QueueNode* head;
//    QueueNode* tail;
//}Queue;
//
//
//
//extern void QueueInit(Queue* pq);
//extern void QueueDestroy(Queue* pq);
//extern void QueuePush(Queue* pq, QDateType x);
//extern void QueuePop(Queue* pq);
//QDateType QueueFront(Queue* pq);
//QDateType QueueBack(Queue* pq);
//bool QueueEmpty(Queue* pq);
//int QueueSize(Queue* pq);
//
//
//void QueueInit(Queue* pq)
//{
//    assert(pq);
//    pq->head = pq->tail = NULL;
//}
//
//void QueueDestroy(Queue* pq)
//{
//    assert(pq);
//    QueueNode* cur = pq->head;
//    while (cur)
//    {
//        QueueNode* next = cur->next;
//        free(cur);
//        cur = next;
//    }
//    pq->head = pq->tail = NULL;
//}
//
//void QueuePush(Queue* pq, QDateType x)
//{
//    assert(pq);
//    QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
//    newnode->date = x;
//    newnode->next = NULL;
//    if (pq->head == NULL)
//    {
//        pq->head = pq->tail = newnode;
//    }
//    else
//    {
//        pq->tail->next = newnode;
//        pq->tail = newnode;
//    }
//}
//
//void QueuePop(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//    //只有一个结点
//    if (pq->head->next == NULL)
//    {
//        free(pq->head);
//        pq->head = pq->tail = NULL;
//    }
//    else
//    {
//        QueueNode* next = pq->head->next;
//        free(pq->head);
//        pq->head = next;
//    }
//}
//
//QDateType QueueFront(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//    return pq->head->date;
//}
//
//QDateType QueueBack(Queue* pq)
//{
//    assert(pq);
//    assert(!QueueEmpty(pq));
//    return pq->tail->date;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//    assert(pq);
//    return pq->head == NULL;
//}
//
//
//
//int QueueSize(Queue* pst)
//{
//    QueueNode* cur = pst->head;
//    int size = 0;
//    while (cur)
//    {
//        size++;
//        cur = cur->next;
//    }
//    return size;
//}
//
//
//
//typedef struct {
//    Queue q1;
//    Queue q2;
//} MyStack;
//
//
//MyStack* myStackCreate() {
//    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//    QueueInit(&pst->q1);
//    QueueInit(&pst->q2);
//    return pst;
//}
//
//void myStackPush(MyStack* obj, int x) {
//    assert(obj);
//    if (!QueueEmpty(&obj->q1))
//    {
//        QueuePush(&obj->q1, x);
//    }
//    else
//    {
//        QueuePush(&obj->q2, x);
//    }
//}
//
//int myStackPop(MyStack* obj) {
//    assert(obj);
//    if (QueueEmpty(&obj->q1))
//    {
//        while (QueueSize(&obj->q2) != 1)
//        {
//            QueuePush(&obj->q1, QueueFront(&obj->q2));
//            QueuePop(&obj->q2);
//        }
//        int tmp = QueueFront(&obj->q2);
//        QueuePop(&obj->q2);
//        return tmp;
//    }
//    else
//    {
//        while (QueueSize(&obj->q1) != 1)
//        {
//            QueuePush(&obj->q2, QueueFront(&obj->q1));
//            QueuePop(&obj->q1);
//        }
//        int tmp = QueueFront(&obj->q1);
//        QueuePop(&obj->q1);
//        return tmp;
//    }
//}
//
//
///*int myStackPop(MyStack* obj) {
//    Queue* pempty = &obj->q1;
//    Queue* pnoempty = &obj->q2;
//    if(!QueueEmpty(&obj->q1))
//    {
//       pempty = &obj->q2;
//       pnoempty = &obj->q1;
//    }
//    while(QueueSize(pnoempty) > 1)
//    {
//        QueuePush(pempty, QueueFront(pnoempty));
//        QueuePop(pnoempty);
//    }
//    int tmp = QueueFront(pnoempty);
//    QueuePop(pnoempty);
//    return tmp;
//}*/
//
//
//int myStackTop(MyStack* obj) {
//    assert(obj);
//    if (!QueueEmpty(&obj->q1))
//    {
//        return obj->q1.tail->date;
//        //return QueueBack(&obj->q1);
//    }
//    else
//    {
//        return obj->q2.tail->date;
//        //return QueueBack(&obj->q2);
//    }
//}
//
//bool myStackEmpty(MyStack* obj) {
//    return (QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2));
//}
//
//void myStackFree(MyStack* obj) {
//    QueueDestroy(&obj->q1);
//    QueueDestroy(&obj->q2);
//    free(obj);
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