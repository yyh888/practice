#define  _CRT_SECURE_NO_WARNINGS


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        //此时相遇
//        if (slow == fast)
//        {
//            struct ListNode* meet = fast;
//            while (meet != head)
//            {
//                meet = meet->next;
//                head = head->next;
//            }
//            return meet;
//        }
//    }
//    return NULL;
//
//}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)
//        {
//            struct ListNode* meet = fast;
//            //转化成相交链表
//            struct ListNode* newhead = meet->next;
//            int lenA = 0, lenB = 0;
//            struct ListNode* curA = head, * curB = newhead;
//            while (curA != meet)
//            {
//                lenA++;
//                curA = curA->next;
//            }
//            while (curB != meet)
//            {
//                lenB++;
//                curB = curB->next;
//            }
//            struct ListNode* longlist = head, * shortlist = newhead;
//            if (lenA < lenB)
//            {
//                longlist = newhead;
//                shortlist = head;
//            }
//            //先走的步数
//            int gap = abs(lenA - lenB);
//            while (gap--)
//            {
//                longlist = longlist->next;
//            }
//            while (longlist != shortlist)
//            {
//                shortlist = shortlist->next;
//                longlist = longlist->next;
//            }
//            return longlist;
//        }
//    }
//    return NULL;
//
//}



/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

//struct Node* copyRandomList(struct Node* head) {
//    //copy
//    struct Node* cur = head;
//    while (cur)
//    {
//        struct Node* next = cur->next;
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//        cur->next = copy;
//        copy->next = next;
//        cur = copy->next;
//    }
//    //random
//    cur = head;
//    while (cur)
//    {
//        struct Node* copy = cur->next;
//        if (cur->random == NULL)
//        {
//            copy->random = NULL;
//        }
//        else
//        {
//            copy->random = cur->random->next;
//        }
//        cur = cur->next->next;
//    }
//    //断开链接
//    cur = head;
//    //哨兵位
//    struct Node* copyhead, * copytail;
//    copyhead = copytail = (struct Node*)malloc(sizeof(struct Node));
//    while (cur)
//    {
//        struct Node* copy = cur->next, * next = copy->next;
//        copytail->next = copy;
//        cur = next;
//        copytail = copytail->next;
//    }
//    copytail->next = NULL;
//    struct Node* tmp = copyhead->next;
//    free(copyhead);
//    return tmp;
//
//}




