/*typedef int QDateType;


typedef struct QueueNode
{
    struct QueueNode* _next;
    QDateType _data;
}QNode;


//记录队头和队尾
typedef struct Queue
{
    QNode* _front;
    QNode* _rear;
}Queue;



extern void QueueInit(Queue* q);
extern void QueueDestroy(Queue* q);
extern void QueuePush(Queue* pq, QDateType x);
extern void QueuePop(Queue* q);
QDateType QueueFront(Queue* q);
QDateType QueueBack(Queue* q);
bool QueueEmpty(Queue* q);
int QueueSize(Queue* q);


void QueueInit(Queue* pq)
{
    assert(pq);
    pq->_front = pq->_rear = NULL;
}

void QueueDestroy(Queue* pq)
{
    assert(pq);
    QNode* cur = pq->_front;
    while (cur)
    {
        QNode* next = cur->_next;
        free(cur);
        cur = next;
    }
    pq->_front = pq->_rear = NULL;
}

void QueuePush(Queue* pq, QDateType x)
{
    assert(pq);
    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    newnode->_data = x;
    newnode->_next = NULL;
    if (pq->_front == NULL)
    {
        pq->_front = pq->_rear = newnode;
    }
    else
    {
        pq->_rear->next = newnode;
        pq->_rear = newnode;
    }
}

void QueuePop(Queue* pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    //只有一个结点
    if (pq->_front->_next == NULL)
    {
        free(pq->_front);
        pq->_front = pq->_rear = NULL;
    }
    else
    {
        QNode* next = pq->_front->_next;
        free(pq->_front);
        pq->_front = next;
    }
}

QDateType QueueFront(Queue* pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    return pq->_front->_data;
}

QDateType QueueBack(Queue* pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    return pq->_rear->_data;
}

bool QueueEmpty(Queue* pq)
{
    assert(pq);
    return pq->_front == NULL;
}



int QueueSize(Queue* pst)
{
    QNode* cur = pst->_front;
    int size = 0;
    while (cur)
    {
        size++;
        cur = cur->_next;
    }
    return size;
}



typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    QueueInit(&pst->q1);
    QueueInit(&pst->q2);
    return pst;
}

void myStackPush(MyStack* obj, int x) {
    assert(obj);
    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }
}

int myStackPop(MyStack* obj) {
    assert(obj);
    if (QueueEmpty(&obj->q1))
    {
        while (QueueSize(&obj->q2) != 1)
        {
            QueuePush(&obj->q1, QueueFront(&obj->q2));
            QueuePop(&obj->q2);
        }
        int tmp = QueueFront(&obj->q2);
        QueuePop(&obj->q2);
        return tmp;
    }
    else
    {
        while (QueueSize(&obj->q1) != 1)
        {
            QueuePush(&obj->q2, QueueFront(&obj->q1));
            QueuePop(&obj->q1);
        }
        int tmp = QueueFront(&obj->q1);
        QueuePop(&obj->q1);
        return tmp;
    }
}


int myStackTop(MyStack* obj) {
    assert(obj);
    if (!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }
}

bool myStackEmpty(MyStack* obj) {
    return (QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2));
}

void myStackFree(MyStack* obj) {
    QueueDestroy(&obj->q1);
    QueueDestroy(&obj->q2);
    free(obj);
}*/

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/



//typedef int STDataType;
//typedef struct Stack
//{
//    STDataType* _a;
//    int _top;		// 栈顶
//    int _capacity;  // 容量 
//}Stack;
//// 初始化栈 
//void StackInit(Stack* ps);
//// 入栈 
//void StackPush(Stack* ps, STDataType data);
//// 出栈 
//void StackPop(Stack* ps);
//// 获取栈顶元素 
//STDataType StackTop(Stack* ps);
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps);
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//bool StackEmpty(Stack* ps);
//// 销毁栈 
//void StackDestroy(Stack* ps);
//
//// 初始化栈 
//void StackInit(Stack* ps)
//{
//    assert(ps);
//    ps->_a = NULL;
//    ps->_capacity = ps->_top = 0;
//}
//// 入栈 
//void StackPush(Stack* ps, STDataType data)
//{
//    assert(ps);
//    //满了就扩容
//    if (ps->_capacity == ps->_top)
//    {
//        int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
//        STDataType* tmp = (STDataType*)realloc(ps->_a, newcapacity * sizeof(STDataType));
//        if (tmp == NULL)
//        {
//            printf("realloc fail");
//            exit(-1);
//        }
//        ps->_a = tmp;
//        ps->_capacity = newcapacity;
//    }
//    ps->_a[ps->_top] = data;
//    ps->_top++;
//}
//// 出栈 
//void StackPop(Stack* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//    ps->_top--;
//}
//// 获取栈顶元素 
//STDataType StackTop(Stack* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//    return ps->_a[ps->_top - 1];
//}
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps)
//{
//    assert(ps);
//    return ps->_top;
//}
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//bool StackEmpty(Stack* ps)
//{
//    return ps->_top == 0;
//}
//// 销毁栈 
//void StackDestroy(Stack* ps)
//{
//    assert(ps);
//    free(ps->_a);
//    ps->_capacity = ps->_top = 0;
//    ps->_a = NULL;
//}
//
//
//typedef struct {
//    Stack PushSt;
//    Stack PopSt;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//    MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
//    StackInit(&q->PushSt);
//    StackInit(&q->PopSt);
//    return q;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//    StackPush(&obj->PushSt, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//    if (!StackEmpty(&obj->PopSt))
//    {
//        int tmp = StackTop(&obj->PopSt);
//        StackPop(&obj->PopSt);
//        return tmp;
//    }
//    else
//    {
//        while (!StackEmpty(&obj->PushSt))
//        {
//            StackPush(&obj->PopSt, StackTop(&obj->PushSt));
//            StackPop(&obj->PushSt);
//        }
//        int tmp = StackTop(&obj->PopSt);
//        StackPop(&obj->PopSt);
//        return tmp;
//    }
//}
//
//int myQueuePeek(MyQueue* obj) {
//    if (StackEmpty(&obj->PopSt))
//    {
//        while (!StackEmpty(&obj->PushSt))
//        {
//            StackPush(&obj->PopSt, StackTop(&obj->PushSt));
//            StackPop(&obj->PushSt);
//        }
//    }
//    return StackTop(&obj->PopSt);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//    return StackEmpty(&obj->PushSt) && StackEmpty(&obj->PopSt);
//}
//
//void myQueueFree(MyQueue* obj) {
//    StackDestroy(&obj->PushSt);
//    StackDestroy(&obj->PopSt);
//    free(obj);
//}


#include <stdio.h>

int main()
{
    char str[] = "s";
    int sz = sizeof(str);
    printf("%d", sz);
    return 0;
}