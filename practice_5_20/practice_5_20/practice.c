//typedef int STDatetype;
//
//struct Stack
//{
//	STDatetype* a;
//	int top; //栈顶
//	int capacity;//容量
//};
//
//typedef struct Stack Stack;
//
//extern void StackInit(Stack* pst);//初始化
//extern void StackDestroy(Stack* pst);//销毁
//extern void StackPush(Stack* pst, STDatetype x);//入栈
//extern void StackPop(Stack* pst);//出栈
//extern STDatetype StackTop(Stack* pst);//取栈顶的数据
//extern bool StackEmpty(Stack* pst);//判空
//extern int StackSize(Stack* pst);//栈数据个数
//
//
//
//
//void StackCheck(Stack* pst)
//{
//	assert(pst);
//	if (pst->capacity == pst->top)
//	{
//		STDatetype* p = (STDatetype*)realloc(pst->a,
//			sizeof(STDatetype) * 2 * (pst->capacity));
//		if (p == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		else
//		{
//			pst->a = p;
//			pst->capacity *= 2;
//		}
//	}
//}
//
//
//
//void StackInit(Stack* pst)
//{
//	assert(pst);
//	//初始化先开辟四个整形的空间
//	pst->a = (STDatetype*)malloc(sizeof(STDatetype) * 4);
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
//	pst->capacity = pst->top = 0;
//	pst->a = NULL;
//}
//
//
//
//void StackPush(Stack* pst, STDatetype x)
//{
//	assert(pst);
//	//判断是否满了
//	StackCheck(pst);
//	pst->a[pst->top] = x;
//	pst->top++;
//}
//
//
//
//void StackPop(Stack* pst)
//{
//	assert(pst);
//	assert(!StackEmpty(pst));
//	pst->top--;
//}
//
//
//
//STDatetype StackTop(Stack* pst)
//{
//	assert(pst);
//	assert(!StackEmpty(pst));
//	return pst->a[pst->top - 1];
//}
//
//
//
//bool StackEmpty(Stack* pst)
//{
//	return pst->top == 0;
//}
//
//
//
//int StackSize(Stack* pst)
//{
//	return pst->top;
//}
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
//	if (StackEmpty(&obj->PopSt))
//	{
//		while (!StackEmpty(&obj->PushSt))
//		{
//			StackPush(&obj->PopSt, StackTop(&obj->PushSt));
//			StackPop(&obj->PushSt);
//		}
//	}
//	int tmp = StackTop(&obj->PopSt);
//	StackPop(&obj->PopSt);
//	return tmp;
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

#include<stdio.h>


void Test(int* p)
{
	*p = 20;
}



int main()
{
	int a = 10;
	int* p = &a;
	Test(p);
	printf("%d", *p);
	return 0;
}