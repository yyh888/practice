//struct ListNode* ReverseList(struct ListNode* pHead) {
//    // write code here
//    if (pHead == NULL || pHead->next == NULL)
//    {
//        return pHead;
//    }
//    struct ListNode* tmp = ReverseList(pHead->next);
//    pHead->next->next = pHead;
//    pHead->next = NULL;
//    return tmp;
//}
//
//
//struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
//    //表头
//    struct ListNode* pNewHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    pNewHead->next = head;
//    //前序节点
//    struct ListNode* prev = pNewHead;
//    //当前节点
//    struct ListNode* cur = head;
//    //找m
//    for (int i = 1; i < m; i++)
//    {
//        prev = cur;
//        cur = cur->next;
//    }
//    for (int i = m; i < n; i++)
//    {
//        struct ListNode* tmp = cur->next;
//        cur->next = tmp->next;
//        tmp->next = prev->next;
//        prev->next = tmp;
//    }
//    head = pNewHead->next;
//    free(pNewHead);
//    pNewHead = NULL;
//    return head;
//}


static struct ListNode* tmp;

struct ListNode* reverse(struct ListNode* head, int n)
{
    //只颠倒第一个
    if (n == 1)
    {
        tmp = head->next;
        return head;
    }
    struct ListNode* node = reverse(head->next, n - 1);
    head->next->next = head;
    head->next = tmp;
    return node;
}

struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    if (m == 1)
    {
        return reverse(head, n);
    }
    struct ListNode* node = reverseBetween(head->next, m - 1, n - 1);
    head->next = node;
    return head;
}


struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newHead->next = head;
    struct ListNode* end = head, * prev = newHead;
    while (end)
    {
        int i = 1;
        for (i = 1; i < k && end != NULL; i++)
        {
            end = end->next;
        }
        if (end == NULL)
            break;
        int j = 1;
        for (j = 1; j < k; j++)
        {
            struct ListNode* tmp = head->next;
            head->next = tmp->next;
            tmp->next = prev->next;
            prev->next = tmp;
        }
        prev = head;
        head = head->next;
        end = head;
    }
    head = newHead->next;
    free(newHead);
    newHead = NULL;
    return head;
}


struct ListNode* _reverseKGroup(struct ListNode* head, struct ListNode* end)
{
    if (head == end || head->next == end)
    {
        return head;
    }
    struct ListNode* tmp = _reverseKGroup(head->next, end);
    head->next->next = head;
    head->next = end;
    return tmp;
}

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* end = head;
    for (int i = 1; i < k && end; i++)
    {
        end = end->next;
    }
    if (end == NULL)
        return head;
    //用ret接收头部
    struct ListNode* ret = _reverseKGroup(head, end->next);
    //head为尾，链接下一段
    head->next = reverseKGroup(head->next, k);
    return ret;
}
