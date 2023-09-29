class Solution {
public:
    ListNode* Reverse(ListNode* head, ListNode* tail)
    {
        if (head == tail || head->next == tail) return head;
        ListNode* tmp = Reverse(head->next, tail);
        head->next->next = head;
        head->next = tail;
        return tmp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* pHead = new ListNode;
        pHead->next = head;
        ListNode* cur = head, * tail = head;
        ListNode* pre = pHead;
        while (tail)
        {
            int cnt = k;
            while (tail && --cnt)
            {
                tail = tail->next;
            }
            if (tail)
            {
                pre->next = Reverse(cur, tail->next);
                pre = cur;
                cur = tail = cur->next;
            }
        }
        return pHead->next;
    }
};