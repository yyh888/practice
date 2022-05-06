#define  _CRT_SECURE_NO_WARNINGS




//typedef char STDateType;
//
//
//struct Stack
//{
//    STDateType* a;
//    int top;
//    int capacity;
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
////空返回0，非空返回1
//bool StackEmpty(Stack* pst);
//int StackSize(Stack* pst);
//void StackInit(Stack* pst)
//{
//    assert(pst);
//    pst->a = (STDateType*)malloc(sizeof(STDateType) * 4);
//    pst->capacity = 4;
//    pst->top = 0;
//}
//
//
//
//void StackDestroy(Stack* pst)
//{
//    assert(pst);
//    free(pst->a);
//    pst->a = NULL;
//    pst->capacity = pst->top = 0;
//}
//
//
//
//void StackPush(Stack* pst, STDateType x)
//{
//    assert(pst);
//    if (pst->top == pst->capacity)
//    {
//        STDateType* tmp = (STDateType*)realloc(pst->a, sizeof(Stack) * 2 * pst->capacity);
//        if (tmp == NULL)
//        {
//            printf("realloc fail\n");
//            exit(-1);
//        }
//        pst->a = tmp;
//        pst->capacity *= 2;
//    }
//    pst->a[pst->top] = x;
//    pst->top++;
//}
//
//
//
//void StackPop(Stack* pst)
//{
//    assert(pst);
//    //非空
//    assert(!StackEmpty(pst));
//    pst->top--;
//}
//
//STDateType StackTop(Stack* pst)
//{
//    assert(pst);
//    assert(!StackEmpty(pst));
//    return pst->a[pst->top - 1];
//}
////空返回0，非空返回1
//bool StackEmpty(Stack* pst)
//{
//    assert(pst);
//    return pst->top == 0;
//}
//
//
//
//int StackSize(Stack* pst)
//{
//    assert(pst);
//    return pst->top;
//}
//
//
//bool isValid(char* s) {
//    Stack pst;
//    StackInit(&pst);
//    while (*s)
//    {
//        if (*s == '(' || *s == '[' || *s == '{')
//        {
//            StackPush(&pst, *s);
//            s++;
//        }
//        else
//        {
//            if (StackEmpty(&pst))
//            {
//                StackDestroy(&pst);
//                return false;
//            }
//            char top = StackTop(&pst);
//            StackPop(&pst);
//            if (*s != ')' && top == '(')
//            {
//                return false;
//            }
//            else if (*s != '}' && top == '{')
//            {
//                return false;
//            }
//            else if (*s != ']' && top == '[')
//            {
//                return false;
//            }
//            else
//            {
//                s++;
//            }
//        }
//    }
//    bool ret = StackEmpty(&pst);
//    //printf("%d", ret);
//    StackDestroy(&pst);
//    return ret;
//}



