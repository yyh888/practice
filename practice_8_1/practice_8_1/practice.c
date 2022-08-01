class PalindromeList {
public:
    struct ListNode* _reverse(struct ListNode* head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        struct ListNode* tmp = _reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return tmp;
    }
    bool chkPalindrome(ListNode* head) {
        //�ҵ��м�ڵ�
        struct ListNode* mid = head, * fast = head;
        while (fast && fast->next)
        {
            mid = mid->next;
            fast = fast->next->next;
        }
        //���м�ڵ㿪ʼ����
        struct ListNode* newhead = _reverse(mid);
        //�ж��Ƿ����
        while (head && newhead)
        {
            if (head->val != newhead->val)
            {
                return false;
            }
            head = head->next;
            newhead = newhead->next;
        }
        return true;
    }
};




struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    int len1 = 0, len2 = 0;
    struct ListNode* n1 = headA, * n2 = headB;
    while (n1->next)
    {
        len1++;
        n1 = n1->next;
    }
    while (n2->next)
    {
        len2++;
        n2 = n2->next;
    }
    if (n2 != n1)
    {
        return false;
    }
    int gap = abs(len1 - len2);
    if (len1 > len2)
    {
        while (gap--)
        {
            headA = headA->next;
        }
    }
    else
    {
        while (gap--)
        {
            headB = headB->next;
        }
    }
    while (headB != headA)
    {
        headB = headB->next;
        headA = headA->next;
    }
    return headB;
}




bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}


struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        //��ʱ����
        if (slow == fast)
        {
            struct ListNode* meet = fast;
            while (meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    }
    return NULL;
}


struct Node* copyRandomList(struct Node* head) {
    if (head == NULL)
    {
        return NULL;
    }
    //����
    struct Node* cur = head, * next = cur->next;
    while (cur)
    {
        next = cur->next;
        struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
        tmp->val = cur->val;
        cur->next = tmp;
        tmp->next = next;
        cur = next;
    }
    //random
    cur = head;
    while (cur)
    {
        next = cur->next;
        //Ҫ����NULL���
        if (cur->random == NULL)
        {
            next->random = NULL;
        }
        else
        {
            next->random = cur->random->next;
        }
        cur = next->next;
    }
    //�Ͽ�����
    cur = head->next;
    while (cur->next)
    {
        next = cur->next->next;
        cur->next = next;
        cur = next;
    }
    return head->next;
}