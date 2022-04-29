#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        while (head->val == val && head != NULL)
        {
            struct ListNode* tmp = head;
            head = head->next;
            free(tmp);
            tmp = NULL;
            if (head == NULL)
            {
                break;
            }
        }
        struct ListNode* cur = head;
        struct ListNode* prev = NULL;
        while (cur != NULL)
        {
            while (cur->val != val)
            {
                prev = cur;
                cur = cur->next;
                if (cur == NULL)
                {
                    break;
                }
            }
            struct ListNode* tmp = cur;
            if (cur == NULL)
            {
                return head;
            }
            prev->next = cur->next;
            cur = cur->next;
            free(tmp);
            tmp = NULL;

        }

    }
    return head;

}