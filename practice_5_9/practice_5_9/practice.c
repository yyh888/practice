#define  _CRT_SECURE_NO_WARNINGS


//typedef struct {
//    int* a;
//    int k;//队列最多能存多少个数据
//    int front;//头
//    int tail;//队尾数据的下一个
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->a = (int*)malloc(sizeof(int) * (k + 1));
//    obj->k = k;
//    obj->front = 0;
//    obj->tail = 0;
//    return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->tail == obj->front;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    int tailnext = obj->tail + 1;
//    if (tailnext == obj->k + 1)
//    {
//        tailnext = 0;
//    }
//    return tailnext == obj->front;
//}
//
//
//
//
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//    {
//        return false;
//    }
//    else
//    {
//        obj->a[obj->tail] = value;
//        obj->tail++;
//        if (obj->tail == obj->k + 1)
//            obj->tail = 0;
//        return true;
//    }
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return false;
//    }
//    else
//    {
//        ++obj->front;
//        if (obj->front == obj->k + 1)
//        {
//            obj->front = 0;
//        }
//        return true;
//    }
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    else
//    {
//        return obj->a[obj->front];
//    }
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//    {
//        return -1;
//    }
//    int tailprev = obj->tail - 1;
//    if (tailprev == -1)
//        tailprev = obj->k;
//    return obj->a[tailprev];
//}
//
//
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}

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



//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}





#include<stdio.h>


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a != b && a != c && b != c)
//            {
//                printf("Ordinary triangle!\n");
//            }
//            else
//            {
//                printf("Isosceles triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//}



//#include<stdio.h>
//
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    while (~scanf("%d %d", &year, &month))
//    {
//        int day = days[month - 1];
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            if (2 == month)
//            {
//                day++;
//            }
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}