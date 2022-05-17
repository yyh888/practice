/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* n1 = NULL;
//    struct ListNode* n2 = head;
//    struct ListNode* n3 = head->next;
//    while (n3 != NULL)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        n3 = n3->next;
//
//    }
//    n2->next = n1;
//    return n2;
//
//}






/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* newHead = NULL;
//    struct ListNode* cur = head;
//    struct ListNode* next = cur->next;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newHead;
//        newHead = cur;
//        cur = next;
//    }
//    return newHead;
//}
