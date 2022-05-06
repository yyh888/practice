#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* insertionSortList(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* cur = head->next;
//    head->next = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        struct ListNode* ccur = head, * prev = head;
//        while (ccur->next)
//        {
//            if (cur->val < head->val)
//            {
//                cur->next = head;
//                head = cur;
//                break;
//            }
//            ccur = ccur->next;
//            if (ccur->val > cur->val)
//            {
//                prev->next = cur;
//                cur->next = ccur;
//                break;
//            }
//            prev = ccur;
//        }
//        if (ccur == NULL)
//        {
//            prev->next = cur;
//            cur->next = ccur;
//        }
//        cur = next;
//    }
//    return head;
//
//}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* insertionSortList(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* sorthead = head, * cur = head->next;
//    sorthead->next = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        struct ListNode* c = sorthead, * p = NULL;
//        while (c)
//        {
//            if (cur->val < c->val)
//            {
//                break;
//            }
//            else
//            {
//                p = c;
//                c = c->next;
//            }
//        }
//        if (p == NULL)
//        {
//            cur->next = sorthead;
//            sorthead = cur;
//        }
//        else
//        {
//            p->next = cur;
//            cur->next = c;
//        }
//        cur = next;
//    }
//    return sorthead;
//
//}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        while (next && cur->val == next->val)
//        {
//            next = next->next;
//        }
//        cur->next = next;
//        cur = next;
//    }
//    return head;
//
//}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct ListNode* cur = head, * next = cur->next, * prev = NULL;
//    while (next)
//    {
//        if (cur->val == next->val)
//        {
//            while (next && cur->val == next->val)
//            {
//                next = next->next;
//            }
//            //É¾³ý
//            while (cur != next)
//            {
//                struct ListNode* del = cur;
//                cur = cur->next;
//                free(del);
//            }
//            if (prev == NULL)
//            {
//                head = cur;
//            }
//            else
//            {
//                prev->next = cur;
//            }
//            if (next)
//                next = next->next;
//        }
//        else
//        {
//            //µü´ú
//            prev = cur;
//            cur = next;
//            next = next->next;
//        }
//    }
//    return head;
//
//}



int main()
{
	int n = 4;
	char* pa = (char*)malloc(n * sizeof(char));
	int i = 0;
	for (i = 0; i < n; i++)
	{
		pa[i] = 'a';
		printf("%c ", pa[i]);
	}
	return 0;
}