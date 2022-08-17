struct ListNode* oddEvenList(struct ListNode* head) {
    //�������Ϊ�գ���������
    if (head == NULL)
        return head;
    //cur��ͷָ��ڶ����ڵ㣬����Ϊ��
    struct ListNode* cur = head->next;
    //prev��ͷָ���һ���ڵ�
    struct ListNode* prev = head;
    //ָ��cur��ͷ
    struct ListNode* evenhead = cur;
    while (cur != NULL && cur->next != NULL) {
        //ż���ڵ�����
        prev->next = cur->next;
        prev = prev->next;
        //�����ڵ�����
        cur->next = prev->next;
        cur = cur->next;
    }
    //��ż��������
    prev->next = evenhead;
    return head;
}



