#include<stdio.h>


struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    // write code here
    struct ListNode* slow = pListHead, * fast = slow;
    while (k--)
    {
        if (fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
    }
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}




class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        struct ListNode* min = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* max = (struct ListNode*)malloc(sizeof(struct ListNode));
        struct ListNode* n1 = min, * n2 = max;
        while (pHead)
        {
            if (pHead->val < x)
            {
                n1->next = pHead;
                n1 = pHead;
                pHead = pHead->next;
            }
            else
            {
                n2->next = pHead;
                n2 = pHead;
                pHead = pHead->next;
            }
        }
        n2->next = NULL;
        n1->next = max->next;
        struct ListNode* node = min->next;
        free(min);
        free(max);
        return node;
    }
};