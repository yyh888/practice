struct ListNode* deleteNode(struct ListNode* head, int val) {
    if (head == NULL)
    {
        return NULL;
    }
    head->next = deleteNode(head->next, val);
    if (head->val == val)
    {
        return head->next;
    }
    return head;
}