struct ListNode* reverse(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode* tmp = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return tmp;
}

struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2) {
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    head1 = reverse(head1);
    head2 = reverse(head2);
    struct ListNode* tail = NULL;
    int add = 0;
    while (head1 && head2)
    {
        int ret = head1->val + head2->val + add;
        add = 0;
        if (ret >= 10)
        {
            ret %= 10;
            add = 1;
        }
        struct ListNode* node = (struct ListNdoe*)malloc(sizeof(struct ListNode));
        node->val = ret;
        node->next = tail;
        tail = node;
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL)
    {
        return tail;
    }
    struct ListNode* Nhead = head1 == NULL ? head2 : head1;
    while (Nhead)
    {
        int ret = Nhead->val + add;
        add = 0;
        if (ret >= 10)
        {
            ret %= 10;
            add = 1;
        }
        struct ListNode* node = (struct ListNdoe*)malloc(sizeof(struct ListNode));
        node->val = ret;
        node->next = tail;
        tail = node;
        Nhead = Nhead->next;
    }
    if (add == 1)
    {
        struct ListNode* node = (struct ListNdoe*)malloc(sizeof(struct ListNode));
        node->val = 1;
        node->next = tail;
        tail = node;
    }
    return tail;
}
