#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//typedef int STDateType;
//
//
//struct Stack
//{
//	STDateType* a;
//	int top;
//	int capacity;
//};
//
//typedef struct Stack Stack;
//
//
//
//void StackInit(Stack* pst);
//void StackDestroy(Stack* pst);
//void StackPush(Stack* pst, STDateType x);
//void StackPop(Stack* pst);
//
//
//STDateType StackTop(Stack* pst);
////�շ���0���ǿշ���1
//bool StackEmpty(Stack* pst);
//int StackSize(Stack* pst);
//
//
//
//
//void StackInit(Stack* pst)
//{
//	assert(pst);
//	pst->a = (STDateType*)malloc(sizeof(STDateType) * 4);
//	pst->capacity = 4;
//	pst->top = 0;
//}
//
//
//
//void StackDestroy(Stack* pst)
//{
//	assert(pst);
//	free(pst->a);
//	pst->a = NULL;
//	pst->capacity = pst->top = 0;
//}
//
//
//
//void StackPush(Stack* pst, STDateType x)
//{
//	assert(pst);
//	if (pst->top == pst->capacity)
//	{
//		STDateType* tmp = (STDateType*)realloc(pst->a, sizeof(Stack) * 2 * pst->capacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		pst->a = tmp;
//		pst->capacity *= 2;
//	}
//	pst->a[pst->top] = x;
//	pst->top++;
//}
//
//
//
//void StackPop(Stack* pst)
//{
//	assert(pst);
//	//�ǿ�
//	assert(!StackEmpty(pst));
//	pst->top--;
//}
//
//STDateType StackTop(Stack* pst)
//{
//	assert(pst);
//	assert(!StackEmpty(pst));
//	return pst->a[pst->top - 1];
//}
////�շ���0���ǿշ���1
//bool StackEmpty(Stack* pst)
//{
//	assert(pst);
//	return pst->top == 0;
//}
//
//
//
//int StackSize(Stack* pst)
//{
//	assert(pst);
//	return pst->top;
//}
//
//
//
//
//typedef struct {
//	Stack PushSt;
//	Stack PopSt;
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//	MyQueue* pst = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&pst->PushSt);
//	StackInit(&pst->PopSt);
//	return pst;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->PushSt, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//	//popStû����
//	if (StackEmpty(&obj->PopSt))
//	{
//		while (!StackEmpty(&obj->PushSt))
//		{
//			StackPush(&obj->PopSt, StackTop(&obj->PushSt));
//			StackPop(&obj->PushSt);
//		}
//	}
//	int top = StackTop(&obj->PopSt);
//	StackPop(&obj->PopSt);
//	return top;
//}
//
//int myQueuePeek(MyQueue* obj) {
//	if (StackEmpty(&obj->PopSt))
//	{
//		while (!StackEmpty(&obj->PushSt))
//		{
//			StackPush(&obj->PopSt, StackTop(&obj->PushSt));
//			StackPop(&obj->PushSt);
//		}
//	}
//	return StackTop(&obj->PopSt);
//
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->PushSt) && StackEmpty(&obj->PopSt);
//}
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->PushSt);
//	StackDestroy(&obj->PopSt);
//	free(obj);
//}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/



//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = a ^ b;
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((c >> i) & 1 == 1)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("ż��λ:");
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ:");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 2;
//	int b = 3;
//	printf("����ǰ��%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������%d %d", a, b);
//	return 0;
//}



//int NumberOf1(int n) {
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1 == 1)
//            count++;
//    }
//    return count;
//}