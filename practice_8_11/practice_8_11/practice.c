struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
    if (pHead1 == NULL)
    {
        return pHead2;
    }
    if (pHead2 == NULL)
    {
        return pHead1;
    }
    struct ListNode* head;
    if (pHead1->val < pHead2->val)
    {
        head = pHead1;
        head->next = Merge(pHead1->next, pHead2);
    }
    else
    {
        head = pHead2;
        head->next = Merge(pHead1, pHead2->next);
    }
    return head;
}

struct ListNode* DivMerge(struct ListNode** list, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }
    //中间一个的情况
    if (left == right)
    {
        return list[left];
    }
    int mid = (left + right) >> 1;
    struct ListNode* head1 = DivMerge(list, left, mid);
    struct ListNode* head2 = DivMerge(list, mid + 1, right);
    return Merge(head1, head2);
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsLen) {
    return DivMerge(lists, 0, listsLen - 1);
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* slow = head, * fast = head;
    struct ListNode* NewHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    NewHead->next = head;
    struct ListNode* prev = NewHead, * next = slow->next;
    //fast先走n步
    while (n--)
    {
        fast = fast->next;
    }
    while (fast)
    {
        prev = slow;
        slow = slow->next;
        next = slow->next;
        fast = fast->next;
    }
    prev->next = next;
    free(slow);
    head = NewHead->next;
    free(NewHead);
    return head;
}