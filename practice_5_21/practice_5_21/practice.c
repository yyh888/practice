/*typedef struct {
    int* a;
    int k;
    int front;
    int tail;
} MyCircularQueue;



MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    cq->a = (int*)malloc(sizeof(int) * (k + 1));
    cq->front = cq->tail = 0;
    cq->k = k;
    return cq;
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    int tailNext = obj->tail + 1;
    if (tailNext == obj->k + 1)
    {
        tailNext = 0;
    }
    return tailNext == obj->front;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    obj->a[obj->tail] = value;
    obj->tail++;
    if (obj->tail == obj->k + 1)
    {
        obj->tail = 0;
    }
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    obj->front++;
    if (obj->front == obj->k + 1)
    {
        obj->front = 0;
    }
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    return obj->a[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    int tailprev = obj->tail - 1;
    if (tailprev == -1)
    {
        tailprev = obj->k;
    }
    return obj->a[tailprev];
}


void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->a);
}*/

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/