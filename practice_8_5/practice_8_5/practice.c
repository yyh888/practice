//typedef int STDataType;
//typedef struct Stack
//{
//    STDataType* _a;
//    int _top;		// ջ��
//    int _capacity;  // ���� 
//}Stack;
//// ��ʼ��ջ 
//void StackInit(Stack* ps);
//// ��ջ 
//void StackPush(Stack* ps, STDataType data);
//// ��ջ 
//void StackPop(Stack* ps);
//// ��ȡջ��Ԫ�� 
//STDataType StackTop(Stack* ps);
//// ��ȡջ����ЧԪ�ظ��� 
//int StackSize(Stack* ps);
//// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
//bool StackEmpty(Stack* ps);
//// ����ջ 
//void StackDestroy(Stack* ps);
//// ��ʼ��ջ 
//void StackInit(Stack* ps)
//{
//    assert(ps);
//    ps->_a = NULL;
//    ps->_capacity = ps->_top = 0;
//}
//// ��ջ 
//void StackPush(Stack* ps, STDataType data)
//{
//    assert(ps);
//    //���˾�����
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
//// ��ջ 
//void StackPop(Stack* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//    ps->_top--;
//}
//// ��ȡջ��Ԫ�� 
//STDataType StackTop(Stack* ps)
//{
//    assert(ps);
//    assert(!StackEmpty(ps));
//    return ps->_a[ps->_top - 1];
//}
//// ��ȡջ����ЧԪ�ظ��� 
//int StackSize(Stack* ps)
//{
//    assert(ps);
//    return ps->_top;
//}
//// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
//bool StackEmpty(Stack* ps)
//{
//    return ps->_top == 0;
//}
//// ����ջ 
//void StackDestroy(Stack* ps)
//{
//    assert(ps);
//    free(ps->_a);
//    ps->_capacity = ps->_top = 0;
//    ps->_a = NULL;
//}
//
//bool isValid(char* s) {
//    if (s == NULL)
//    {
//        return true;
//    }
//    Stack st;
//    StackInit(&st);
//    while (*s)
//    {
//        if (*s == '(' || *s == '[' || *s == '{')
//        {
//            StackPush(&st, *s);
//        }
//        else
//        {
//            if (StackEmpty(&st))
//            {
//                return false;
//            }
//            else
//            {
//                char tmp = StackTop(&st);
//                StackPop(&st);
//                if ((tmp == '(' && *s != ')') ||
//                    (tmp == '{' && *s != '}') ||
//                    (tmp == '[' && *s != ']'))
//                {
//                    StackDestroy(&st);
//                    return false;
//                }
//            }
//        }
//        s++;
//    }
//    if (!StackEmpty(&st))
//    {
//        StackDestroy(&st);
//        return false;
//    }
//    StackDestroy(&st);
//    return true;
//}



