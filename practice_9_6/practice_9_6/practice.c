char* replaceSpace(char* s) {
    int sz = strlen(s);
    //统计空格数
    char* p = s;
    int count = 0;
    while (*p != 0)
    {
        if (*p == ' ')
        {
            count++;
        }
        p++;
    }
    sz += 2 * count;
    char* str = (char*)malloc(sizeof(char) * sz + 1);
    //双指针
    p = s;
    int i = 0;//str
    while (*p != 0)
    {
        if (*p == ' ')
        {
            str[i++] = '%';
            str[i++] = '2';
            str[i++] = '0';
        }
        else
        {
            str[i++] = *p;
        }
        p++;
    }
    return str;
}



void _printListFromTailToHead(struct ListNode* head, int* temp, int* i)
{
    if (head == NULL)
    {
        return;
    }
    _printListFromTailToHead(head->next, temp, i);
    temp[*i] = head->val;
    (*i)++;
}

int* printListFromTailToHead(struct ListNode* listNode, int* returnSize) {
    //计算链表长度
    int count = 0;
    struct ListNode* cur = listNode;
    while (cur)
    {
        count++;
        cur = cur->next;
    }
    int* temp = (int*)malloc(sizeof(int) * count);
    int i = 0;
    _printListFromTailToHead(listNode, temp, &i);
    *returnSize = i;
    return temp;
}


