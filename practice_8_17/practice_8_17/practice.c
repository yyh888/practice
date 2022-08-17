struct ListNode* oddEvenList(struct ListNode* head) {
    //如果链表为空，不用重排
    if (head == NULL)
        return head;
    //cur开头指向第二个节点，可能为空
    struct ListNode* cur = head->next;
    //prev开头指向第一个节点
    struct ListNode* prev = head;
    //指向cur开头
    struct ListNode* evenhead = cur;
    while (cur != NULL && cur->next != NULL) {
        //偶数节点链接
        prev->next = cur->next;
        prev = prev->next;
        //奇数节点链接
        cur->next = prev->next;
        cur = cur->next;
    }
    //奇偶链表相连
    prev->next = evenhead;
    return head;
}



