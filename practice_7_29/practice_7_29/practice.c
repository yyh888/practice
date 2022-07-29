struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
    {
        return NULL;
    }
    //ÕÒÍ·
    while (head && head->val == val)
    {
        struct ListNode* tmp = head;
        head = head->next;
        free(tmp);
    }
    //É¾ÔªËØ
    struct ListNode* cur = head;
    struct ListNode* prev = head;
    while (cur)
    {
        if (cur->val == val)
        {
            struct ListNode* next = cur->next;
            free(cur);
            cur = next;
            prev->next = cur;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}



struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode* tmp = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return tmp;
}