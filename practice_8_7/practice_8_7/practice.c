/*typedef struct Queue {
    struct Queue* _next;
    int _data;
}QNode;


typedef struct {
    QNode* _front;
    QNode* _rear;
} MyCircularQueue;


bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);


void QueueInit(MyCircularQueue* q)
{
    assert(q);
    q->_front = q->_rear = NULL;
}


void QueuePush(MyCircularQueue* q, int data)
{
    QNode* node = (QNode*)malloc(sizeof(QNode));
    node->_data = data;
    node->_next = NULL;
    if (q->_front == NULL)
    {
        q->_front = q->_rear = node;
    }
    else
    {
        q->_rear->_next = node;
        q->_rear = node;
    }
}


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    QueueInit(q);
    k++;
    while (k--)
    {
        QueuePush(q, 0);
    }
    q->_rear->_next = q->_front;
    q->_rear = q->_front;
    return q;
}


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (obj->_rear->_next == obj->_front)
    {
        return false;
    }
    else
    {
        obj->_rear->_data = value;
        obj->_rear = obj->_rear->_next;
        return true;
    }
}


bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    else
    {
        obj->_front = obj->_front->_next;
        return true;
    }
}


int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        return obj->_front->_data;
    }
}


int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        QNode* cur = obj->_rear;
        while (cur->_next != obj->_rear)
        {
            cur = cur->_next;
        }
        return cur->_data;
    }
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    assert(obj);
    return obj->_front == obj->_rear;
}


bool myCircularQueueIsFull(MyCircularQueue* obj) {
    assert(obj);
    return obj->_front == obj->_rear->_next;
}


void myCircularQueueFree(MyCircularQueue* obj) {
    while (obj->_front != obj->_rear)
    {
        QNode* del = obj->_front;
        obj->_front = obj->_front->_next;
        free(del);
    }
    free(obj);
}*/



#include <stdio.h>
#include <string.h>

int main()
{
    char* a = "abcd";
    char a1[5];
    memcpy(a1, a, 4);
    return 0;
}