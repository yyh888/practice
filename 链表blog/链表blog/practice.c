/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

//struct Node* copyRandomList(struct Node* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct Node* cur = head;
//    //���ӿ������
//    while (cur)
//    {
//        struct Node* next = cur->next;
//        struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
//        tmp->val = cur->val;
//        cur->next = tmp;
//        tmp->next = next;
//        cur = next;
//    }
//    //random
//    cur = head;
//    while (cur)
//    {
//        struct Node* next = cur->next;
//        //Ҫ����NULL���
//        if (cur->random == NULL)
//        {
//            next->random = NULL;
//        }
//        else
//        {
//            next->random = cur->random->next;
//        }
//        cur = next->next;
//    }
//    //���ӿ������
//    cur = head->next;
//    //ֻ��һ�����
//    if (cur->next == NULL)
//    {
//        return cur;
//    }
//    struct Node* next = cur->next->next;
//    struct Node* tmp = cur;
//    while (next->next)
//    {
//        cur->next = next;
//        cur = next;
//        next = cur->next->next;
//    }
//    cur->next = next;
//    return tmp;
//}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* insertionSortList(struct ListNode* head) {
//    if (head == NULL && head->val == NULL)
//    {
//        return head;
//    }
//    struct ListNode* sorthead = head, * cur = head->next;
//    head->next = NULL;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        //�ǲ���ͷ���
//        if (cur->val < sorthead->val)
//        {
//            cur->next = sorthead;
//            sorthead = cur;
//        }
//        else
//        {
//            struct ListNode* p = sorthead, * pre = NULL;
//            while (p)
//            {
//                if (cur->val < p->val)
//                {
//                    pre->next = cur;
//                    cur->next = p;
//                    break;
//                }
//                pre = p;
//                p = p->next;
//            }
//            if (p == NULL)
//            {
//                pre->next = cur;
//                cur->next = NULL;
//            }
//        }
//        cur = next;
//    }
//    return sorthead;
//}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


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
//        return NULL;
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
//            //ɾ��
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
//            {
//                next = next->next;
//            }
//        }
//        else
//        {
//            //����
//            prev = cur;
//            cur = next;
//            next = next->next;
//        }
//    }
//
//    return head;
//}
